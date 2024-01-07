/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_color_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:01:10 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 21:40:45 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_color.h"
#include "sfe_pixel.h"

t_bool	sfe_color_replace(t_img *img, t_color old, t_color new)
{
	t_bool	ret;
	t_point	i;

	if (!img || !img->img)
		return (false);
	ret = true;
	i.y = -1;
	while (++i.y < img->size.y)
	{
		i.x = -1;
		while (++i.x < img->size.x)
			if (sfe_color_get(img, i) == old)
				if (!sfe_pixel_put(img, i, new))
					ret = false;
	}
	return (ret);
}
