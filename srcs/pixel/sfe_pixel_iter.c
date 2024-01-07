/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_pixel_iter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:52:37 by mykman            #+#    #+#             */
/*   Updated: 2024/01/05 21:45:01 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_pixel.h"

t_bool	sfe_pixel_iter(t_img *img, t_bool (*f)(t_img *, t_point))
{
	t_bool	ret;
	t_point	i;

	if (!img || !img->img || !f)
		return (false);
	ret = true;
	i.y = -1;
	while (++i.y < img->size.y)
	{
		i.x = -1;
		while (++i.x < img->size.x)
			if (!f(img, i))
				ret = false;
	}
	return (ret);
}
