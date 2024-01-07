/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:26:19 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 22:29:20 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

t_bool	sfe_image_cpy(t_img const *src, t_img *dst, t_point p_dst)
{
	if (!src || !dst)
		return (false);
	return (sfe_pixel_area_cpy(src, size_to_area(src->size), dst, p_dst));
}
