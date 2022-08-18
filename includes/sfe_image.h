/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:29:37 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 10:03:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_IMAGE_H
# define SFE_IMAGE_H

# include "t_img.h"
# include "t_color.h"

# include "ft_point.h"
# include "ft_area.h"
# include "ft_bool.h"

t_img	sfe_image_new(void *mlx_ptr, t_point size, t_color bg);
t_img	sfe_image_sub(void *mlx_ptr, t_img img, t_area area);
t_bool	sfe_image_cpy(t_img src, t_img dst, t_point p_dst);

#endif
