/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_mod_cpy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:53:57 by marykman          #+#    #+#             */
/*   Updated: 2024/01/05 22:35:44 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

static t_point	no_mod(t_point src_size, t_point i)
{
	(void)src_size;
	return (i);
}

t_bool	sfe_image_mod_cpy(t_img const *src, t_img *dst, t_point p_dst,
	t_point (*f_mod)(t_point src_size, t_point i))
{
	t_point	i;
	t_bool	ret;

	if (!src || !dst || !src->img || !dst->img)
		return (false);
	if (!f_mod)
		f_mod = &no_mod;
	ret = true;
	i.y = -1;
	while (++i.y < src->size.y)
	{
		i.x = -1;
		while (++i.x < src->size.x)
			if (!sfe_pixel_cpy(src, i, dst,
					add_point(p_dst, f_mod(src->size, i))))
				ret = false;
	}
	return (ret);
}
