/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:06:35 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:40:14 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_scene.h"
#include "ft_point.h"

t_scene	sfe_scene_new(t_img *img, int (*f_init)(), int (*f_update)(),
			void *param)
{
	t_scene	scene;

	if (!img || !img->img)
		return ((t_scene){0});
	scene.img = img;
	scene.size = scene.img->size;
	scene.param = param;
	scene.f_init = f_init;
	scene.f_update = f_update;
	return (scene);
}
