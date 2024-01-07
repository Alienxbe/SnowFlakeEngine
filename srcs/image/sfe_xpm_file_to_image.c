/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_xpm_file_to_image.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 22:15:17 by mykman            #+#    #+#             */
/*   Updated: 2024/01/06 18:49:37 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "ft_memory.h"
#include "mlx.h"

t_img	sfe_xpm_file_to_image(void *mlx_ptr, char const *filename)
{
	t_img	img;

	ft_bzero(&img, sizeof(img));
	if (!mlx_ptr || !filename)
		return (img);
	img.img = mlx_xpm_file_to_image(mlx_ptr, (char *)filename, &img.size.x,
			&img.size.y);
	if (!img.img)
		return (img);
	img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length,
			&img.endian);
	return (img);
}
