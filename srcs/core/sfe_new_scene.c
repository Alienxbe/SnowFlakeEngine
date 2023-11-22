/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_new_scene.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:34:49 by mykman            #+#    #+#             */
/*   Updated: 2023/11/22 23:48:04 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe_scene.h"

t_scene	sfe_new_scene(t_sfe *sfe, void *param)
{
	return (sfe_scene_new(&sfe->win.img, param));
}
