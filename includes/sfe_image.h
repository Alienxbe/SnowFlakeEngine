/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_image.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:29:37 by mykman            #+#    #+#             */
/*   Updated: 2023/12/21 19:27:52 by marykman         ###   ########.fr       */
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

typedef t_img	(*t_filter)(t_sfe *sfe, t_img img, size_t i);
typedef t_point	(*t_mod)(t_point player, t_point i);

t_img	sfe_image_new(void *mlx_ptr, t_point size, t_color bg);
t_img	sfe_image_sub(void *mlx_ptr, t_img img, t_area area);
t_img	sfe_image_resize(void *mlx_ptr, t_img img, t_point new_size);
t_img	sfe_image_reverse_x(void *mlx_ptr, t_img img);
t_img	sfe_image_reverse_y(void *mlx_ptr, t_img img);
t_bool	sfe_image_cpy(t_img src, t_img dst, t_point p_dst);
t_img	sfe_xpm_file_to_image(void *mlx_ptr, char *filename);
t_img	*sfe_load_sprite_sheet(t_sfe *sfe, char *filename, t_point sprite_size,
			t_filter filter);
void	sfe_image_destroy(void *mlx_ptr, t_img img);

#endif
