/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_setbg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:49:45 by mykman            #+#    #+#             */
/*   Updated: 2024/01/06 18:49:47 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_scene.h"
#include "sfe_pixel.h"

t_bool	sfe_scene_setbg(t_scene scene, t_color c)
{
	if (!scene.img)
		return (false);
	return (sfe_pixel_fill(scene.img, size_to_area(scene.size), c));
}
