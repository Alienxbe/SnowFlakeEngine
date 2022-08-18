/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_setbg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:49:45 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 13:04:14 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_scene.h"
#include "sfe_pixel.h"

t_bool	sfe_scene_setbg(t_scene scene, t_color c)
{
	return (sfe_pixel_fill(scene.img, size_to_area(scene.img.size), c));
}
