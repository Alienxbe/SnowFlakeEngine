/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_color_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:36:59 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 21:39:36 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_color.h"

t_color	sfe_color_get(t_img const *img, t_point pos)
{
	char	*dst;

	if (!img || !img->img || !issmaller_point(pos, img->size))
		return ((t_color)0x0);
	dst = img->addr + (pos.y * img->line_length + pos.x * (img->bpp / 8));
	return (*(t_color *)dst);
}
