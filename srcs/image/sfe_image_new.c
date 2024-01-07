/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:08:32 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 22:21:04 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"
#include "mlx.h"

t_img	sfe_image_new(void *mlx_ptr, t_point size, t_color bg)
{
	t_img	img;

	img = (t_img){0};
	if (!mlx_ptr)
		return (img);
	img.img = mlx_new_image(mlx_ptr, size.x, size.y);
	if (!img.img)
		return (img);
	img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length,
			&img.endian);
	img.size = size;
	if (bg)
		sfe_pixel_fill(&img, (t_area){{0, 0}, img.size}, bg);
	return (img);
}
