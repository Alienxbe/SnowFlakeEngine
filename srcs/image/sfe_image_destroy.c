/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:54:11 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 21:00:01 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "mlx.h"
#include <stdlib.h>

void	sfe_image_destroy(void *mlx_ptr, t_img img)
{
	mlx_destroy_image(mlx_ptr, img.img);
}
