/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_pixel_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:51:54 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 21:42:23 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_pixel.h"
#include "sfe_color.h"

t_bool	sfe_pixel_cpy(t_img const *src, t_point p_src, t_img *dst,
	t_point p_dst)
{
	t_color	pixel_color;

	if (!src || !dst || !src->img || !dst->img)
		return (false);
	if (!issmaller_point(p_src, src->size)
		|| !issmaller_point(p_dst, dst->size))
		return (false);
	pixel_color = sfe_color_get(src, p_src);
	if ((pixel_color & 0xFF000000) == 0xFF000000)
		return (true);
	return (sfe_pixel_put(dst, p_dst, pixel_color));
}
