/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_load_sprite_sheet.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:15:35 by marykman          #+#    #+#             */
/*   Updated: 2024/01/06 18:46:57 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "ft_memory.h"
#include "t_sfe.h"
#include "sfe_image.h"
#include "ft_printf.h"

static t_point	get_sprite_dim(t_img sheet, t_point sprite_size)
{
	return ((t_point){(sheet.size.x / sprite_size.x),
		(sheet.size.y / sprite_size.y)});
}

static t_area	get_cpy_area(t_point sprite_size, t_point sprite_dim, size_t i)
{
	t_area	area;
	t_point	pos;

	pos = (t_point){i % sprite_dim.x, i / sprite_dim.y};
	area.p1 = (t_point){pos.x * sprite_size.x, pos.y * sprite_size.y};
	area.p2 = add_point(area.p1, sprite_size);
	return (area);
}

static void	apply_filter(t_sfe *sfe, t_img *sprites, size_t i,
				t_img (*filter)(t_sfe *sfe, t_img *img, size_t i))
{
	if (filter && sprites[i].img)
		sprites[i] = filter(sfe, sprites + i, i);
}

static t_img	*free_all(t_sfe *sfe, t_img *sprites, t_img sheet, t_img *ret)
{
	size_t	i;

	if (sprites)
	{
		i = 0;
		while (sprites[i].img)
			sfe_image_destroy(sfe->mlx_ptr, sprites + i++);
		free(sprites);
	}
	sfe_image_destroy(sfe->mlx_ptr, &sheet);
	return (ret);
}

t_img	*sfe_load_sprite_sheet(t_sfe *sfe, char const *filename,
			t_point sprite_size,
			t_img (*filter)(t_sfe *sfe, t_img *img, size_t i))
{
	t_img	sheet;
	t_img	*sprites;
	t_point	sprite_dim;
	size_t	sprite_count;
	size_t	i;

	sheet = sfe_xpm_file_to_image(sfe->mlx_ptr, filename);
	if (!sheet.img)
		return (NULL);
	sprite_dim = get_sprite_dim(sheet, sprite_size);
	sprite_count = sprite_dim.x * sprite_dim.y;
	sprites = ft_calloc(sprite_count + 1, sizeof(t_img));
	if (!sprites)
		return (free_all(sfe, sprites, sheet, NULL));
	i = -1;
	while (++i < sprite_count)
	{
		sprites[i] = sfe_image_sub(sfe->mlx_ptr, &sheet,
				get_cpy_area(sprite_size, sprite_dim, i));
		apply_filter(sfe, sprites, i, filter);
		if (!sprites[i].img)
			return (free_all(sfe, sprites, sheet, NULL));
	}
	sfe_image_destroy(sfe->mlx_ptr, &sheet);
	return (sprites);
}
