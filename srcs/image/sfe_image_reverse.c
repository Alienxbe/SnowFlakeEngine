/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 00:52:09 by marykman          #+#    #+#             */
/*   Updated: 2024/01/05 22:30:59 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

t_img	sfe_image_flip_x(void *mlx_ptr, t_img const *img)
{
	t_img	new;
	int		i;

	if (!img)
		return ((t_img){0});
	new = sfe_image_new(mlx_ptr, img->size, 0);
	if (!new.img)
		return (new);
	i = -1;
	while (++i < img->size.x)
		sfe_pixel_area_cpy(img,
			(t_area){{img->size.x - i - 1, 0}, {img->size.x - i, img->size.y}},
			&new, (t_point){i, 0});
	return (new);
}

t_img	sfe_image_flip_y(void *mlx_ptr, t_img const *img)
{
	t_img	new;
	int		i;

	if (!img)
		return ((t_img){0});
	new = sfe_image_new(mlx_ptr, img->size, 0);
	if (!new.img)
		return (new);
	i = -1;
	while (++i < img->size.y)
		sfe_pixel_area_cpy(img,
			(t_area){{0, img->size.y - i - 1}, {img->size.x, img->size.y - i}},
			&new, (t_point){0, i});
	return (new);
}
