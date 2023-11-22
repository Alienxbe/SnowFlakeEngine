/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:06:35 by mykman            #+#    #+#             */
/*   Updated: 2023/11/22 23:45:59 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "t_scene.h"
#include "ft_point.h"

t_scene	sfe_scene_new(t_img *img, void *param)
{
	t_scene	scene;

	scene = (t_scene){0};
	if (!img || !img->img)
		return (scene);
	scene.img = img;
	scene.size = scene.img->size;
	scene.param = param;
	return (scene);
}
