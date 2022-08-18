/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:06:35 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 13:03:33 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_scene.h"
#include "sfe_image.h"

t_scene	new_scene(void *mlx_ptr, t_point size)
{
	t_scene	scene;

	ft_bzero(&scene, sizeof(scene));
	scene.img = sfe_image_new(mlx_ptr, size, 0);
	if (!scene.img.img)
		return (scene);
	return (scene);
}
