/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:30:58 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 20:50:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "sfe_window.h"
#include "ft_memory.h"
#include "mlx.h"
#include <stdlib.h>

static int	endexec(void)
{
	exit(EXIT_SUCCESS);
}

t_sfe	*sfe_init(const char *name, t_point size)
{
	t_sfe	*sfe;

	sfe = (t_sfe *)ft_calloc(1, sizeof(*sfe));
	if (!sfe)
		return (NULL);
	sfe->mlx_ptr = mlx_init();
	if (!sfe->mlx_ptr)
	{
		free(sfe);
		return (NULL);
	}
	sfe->win = sfe_window_new(sfe->mlx_ptr, size, name, &endexec);
	if (!sfe->win.win_ptr)
	{
		free(sfe->mlx_ptr);
		free(sfe);
		return (NULL);
	}
	return (sfe);
}
