/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_cpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:26:19 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 18:36:29 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

t_bool	sfe_image_cpy(t_img src, t_img dst, t_point p_dst)
{
	return (sfe_pixel_area_cpy(src, size_to_area(src.size), dst, p_dst));
}
