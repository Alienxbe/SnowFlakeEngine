/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 00:07:02 by marykman          #+#    #+#             */
/*   Updated: 2023/11/23 01:19:27 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"
#include "sfe_color.h"

t_img	sfe_image_resize(void *mlx_ptr, t_img img, t_point new_size)
{
	t_img	new;
	t_point	i;

	new = sfe_image_new(mlx_ptr, new_size, 0);
	if (!new.img)
		return (new);
	i.x = -1;
	while (++i.x < new_size.x)
	{
		i.y = -1;
		while (++i.y < new_size.y)
			sfe_pixel_cpy(img, (t_point){i.x * img.size.x / new_size.x,
				i.y * img.size.y / new_size.y}, new, i);
	}
	return (new);
}
