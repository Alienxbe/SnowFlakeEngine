/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:29:37 by mykman            #+#    #+#             */
/*   Updated: 2024/01/06 18:44:33 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_IMAGE_H
# define SFE_IMAGE_H

# include <stddef.h>

# include "t_img.h"
# include "t_color.h"

# include "ft_point.h"
# include "ft_area.h"
# include "ft_bool.h"
# include "sfe.h"

t_img	sfe_image_new(void *mlx_ptr, t_point size, t_color bg);
t_img	sfe_image_sub(void *mlx_ptr, t_img const *img, t_area area);
t_img	sfe_image_resize(void *mlx_ptr, t_img const *img, t_point new_size);
t_img	sfe_image_flip_x(void *mlx_ptr, t_img const *img);
t_img	sfe_image_flip_y(void *mlx_ptr, t_img const *img);
t_bool	sfe_image_cpy(t_img const *src, t_img *dst, t_point p_dst);
t_bool	sfe_image_mod_cpy(t_img const *src, t_img *dst, t_point p_dst,
			t_point	(*f)(t_point src_size, t_point i));
t_img	sfe_xpm_file_to_image(void *mlx_ptr, char const *filename);
t_img	*sfe_load_sprite_sheet(t_sfe *sfe, char const *filename,
			t_point sprite_size,
			t_img (*filter)(t_sfe *sfe, t_img *img, size_t i));
void	sfe_image_destroy(void *mlx_ptr, t_img *img);

#endif
