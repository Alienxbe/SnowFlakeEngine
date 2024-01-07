/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_pixel_area_cpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 02:16:42 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 21:43:03 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_pixel.h"

t_bool	sfe_pixel_area_cpy(t_img const *src, t_area a_src, t_img *dst,
	t_point p_dst)
{
	t_point	size;
	t_point	i;
	t_bool	ret;

	if (!src || !dst || !src->img || !dst->img)
		return (false);
	ret = true;
	size = area_to_size(a_src);
	i.y = -1;
	while (++i.y < size.y)
	{
		i.x = -1;
		while (++i.x < size.x)
			if (!sfe_pixel_cpy(src, add_point(a_src.p1, i), dst,
					add_point(p_dst, i)))
				ret = false;
	}
	return (ret);
}
