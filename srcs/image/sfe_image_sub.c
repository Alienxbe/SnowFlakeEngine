/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:23:57 by mykman            #+#    #+#             */
/*   Updated: 2022/08/17 18:16:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

t_img	sfe_image_sub(void *mlx_ptr, t_img img, t_area area)
{
	t_img	new;
	t_point	size;

	size = area_to_size(area);
	if (size.x < 0 || size.y < 0
		|| area.p1.x < 0 || area.p1.y < 0
		|| area.p2.x > img.size.x || area.p2.y > img.size.y)
		return ((t_img){0});
	new = sfe_image_new(mlx_ptr, size, 0xFF000000);
	if (!new.img)
		return (new);
	sfe_pixel_area_cpy(img, area, new, (t_point){0});
	return (new);
}
