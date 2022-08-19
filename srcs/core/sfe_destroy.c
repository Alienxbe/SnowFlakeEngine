/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:52:08 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 21:02:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "sfe_image.h"
#include "mlx.h"
#include <stdlib.h>

void	sfe_destroy(t_sfe *sfe)
{
	if (!sfe)
		return ;
	sfe_image_destroy(sfe->mlx_ptr, sfe->win.img);
	mlx_destroy_window(sfe->mlx_ptr, sfe->win.win_ptr);
	free(sfe->mlx_ptr);
	free(sfe);
}
