/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image_mod_cpy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:53:57 by marykman          #+#    #+#             */
/*   Updated: 2023/12/21 19:27:06 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "sfe_pixel.h"

t_point	no_mod(t_point src_size, t_point i)
{
	(void)src_size;
	return (i);
}

t_bool	sfe_image_mod_cpy(t_img src, t_img dst, t_point p_dst, t_mod f_mod)
{
	t_point	i;
	t_bool	ret;

	if (!src.img || !dst.img)
		return (false);
	if (!f_mod)
		f_mod = &no_mod;
	ret = true;
	i.y = -1;
	while (++i.y < src.size.y)
	{
		i.x = -1;
		while (++i.x < src.size.x)
			if (!sfe_pixel_cpy(src, i, dst,
					add_point(p_dst, f_mod(src.size, i))))
				ret = false;
	}
	return (ret);
}
