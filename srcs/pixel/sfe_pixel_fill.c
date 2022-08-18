/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_pixel_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:35:41 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:55:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_pixel.h"

t_bool	sfe_pixel_fill(t_img img, t_area area, t_color color)
{
	t_point	size;
	t_point	i;

	if (!img.img)
		return (false);
	size = area_to_size(area);
	i.y = -1;
	while (++i.y < size.y)
	{
		i.x = -1;
		while (++i.x < size.x)
			sfe_pixel_put(img, add_point(area.p1, i), color);
	}
	return (!issmaller_point(area.p2, img.size));
}
