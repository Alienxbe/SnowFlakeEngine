/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:30:58 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 13:54:11 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "sfe_event.h"
#include "sfe_window.h"
#include "ft_memory.h"
#include "ft_printf.h"
#include "mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

static int	limit_fps(unsigned int frame_rendering_time, unsigned int fps_max)
{
	if (!fps_max)
		fps_max = SFE_DEFAULT_FPS_MAX;
	if (frame_rendering_time < (CLOCKS_PER_SEC / fps_max))
	{
		usleep((CLOCKS_PER_SEC / fps_max) - frame_rendering_time);
		frame_rendering_time = (CLOCKS_PER_SEC / fps_max);
	}
	return (CLOCKS_PER_SEC / frame_rendering_time);
}

static int	_update(t_sfe *sfe)
{
	clock_t	update_time;

	if (!sfe)
		return (1);
	update_time = clock();
	if (sfe->active_scene)
	{
		if (sfe->active_scene->f_update
			&& !sfe->active_scene->f_update(sfe->active_scene->param))
			sfe_exit(sfe);
		sfe_window_update(&sfe->win);
	}
	sfe->frame_rendering_time = clock() - update_time;
	sfe->fps = limit_fps(sfe->frame_rendering_time, sfe->fps_max);
	return (0);
}

t_sfe	*sfe_init(const char *name, t_point size)
{
	t_sfe	*sfe;

	sfe = (t_sfe *)ft_calloc(1, sizeof(*sfe));
	if (!sfe)
		return (NULL);
	sfe->mlx_ptr = mlx_init();
	sfe->win = sfe_window_new(sfe->mlx_ptr, size, name, NULL);
	sfe->fps_max = SFE_DEFAULT_FPS_MAX;
	sfe->fps = sfe->fps_max;
	sfe_hook(sfe, ON_DESTROY, &sfe_exit, sfe);
	if (!sfe->mlx_ptr || !sfe->win.win_ptr)
	{
		sfe_destroy(sfe);
		return (NULL);
	}
	mlx_loop_hook(sfe->mlx_ptr, &_update, sfe);
	return (sfe);
}
