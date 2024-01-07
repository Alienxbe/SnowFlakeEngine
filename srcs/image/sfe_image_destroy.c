/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:54:11 by mykman            #+#    #+#             */
/*   Updated: 2024/01/06 18:48:39 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "mlx.h"
#include <stdlib.h>

void	sfe_image_destroy(void *mlx_ptr, t_img *img)
{
	if (mlx_ptr && img->img)
	{
		mlx_destroy_image(mlx_ptr, img->img);
		img->img = NULL;
	}
}
