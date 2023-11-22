/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:52:08 by mykman            #+#    #+#             */
/*   Updated: 2023/11/22 23:24:41 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe_window.h"
#include "mlx.h"
#include <stdlib.h>

void	sfe_destroy(t_sfe *sfe)
{
	if (!sfe)
		return ;
	if (sfe->active_scene && sfe->active_scene->f_destroy)
		sfe->active_scene->f_destroy(sfe->active_scene->param);
	sfe_window_destroy(sfe->win);
	free(sfe->mlx_ptr);
	sfe->mlx_ptr = NULL;
	free(sfe);
}
