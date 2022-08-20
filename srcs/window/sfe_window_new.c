/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 06:14:52 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:30:26 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_events.h"
#include "sfe_window.h"
#include "sfe_image.h"
#include "mlx.h"
#include <stddef.h>

t_window	sfe_window_new(void *mlx_ptr, t_point size, const char *name,
				int (*f)())
{
	t_window	win;

	if (!mlx_ptr)
		return ((t_window){0});
	if (!name)
		name = "SnowFlakeEngine";
	win.mlx_ptr = mlx_ptr;
	win.win_ptr = mlx_new_window(mlx_ptr, size.x, size.y, (char *)name);
	if (!win.win_ptr)
		return ((t_window){0});
	win.img = sfe_image_new(mlx_ptr, size, 0xFF000000);
	if (!win.img.img)
	{
		mlx_destroy_window(mlx_ptr, win.win_ptr);
		return ((t_window){0});
	}
	if (f)
		mlx_hook(win.win_ptr, ON_DESTROY, 0, f, NULL);
	win.size = size;
	win.name = name;
	return (win);
}
