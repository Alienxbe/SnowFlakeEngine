/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:30:58 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 23:34:34 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "sfe_window.h"
#include "ft_memory.h"
#include "mlx.h"
#include <stdlib.h>

t_sfe	*sfe_init(const char *name, t_point size)
{
	t_sfe	*sfe;

	sfe = (t_sfe *)ft_calloc(1, sizeof(*sfe));
	if (!sfe)
		return (NULL);
	sfe->mlx_ptr = mlx_init();
	sfe->win = sfe_window_new(sfe->mlx_ptr, size, name, NULL);
	if (!sfe->mlx_ptr || !sfe->win.win_ptr)
	{
		sfe_destroy(sfe);
		return (NULL);
	}
	return (sfe);
}
