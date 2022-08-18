/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_pixel.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:26:35 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 10:02:51 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_PIXEL_H
# define SFE_PIXEL_H

# include "t_img.h"
# include "t_color.h"

# include "ft_point.h"
# include "ft_area.h"
# include "ft_bool.h"

t_bool	sfe_pixel_put(t_img img, t_point pos, t_color color);
t_bool	sfe_pixel_fill(t_img img, t_area area, t_color color);
t_bool	sfe_pixel_cpy(t_img src, t_point p_src, t_img dst, t_point p_dst);
t_bool	sfe_pixel_area_cpy(t_img src, t_area a_src, t_img dst, t_point p_dst);
t_bool	ft_pixel_iter(t_img img, t_bool (*f)(t_img, t_point));

#endif
