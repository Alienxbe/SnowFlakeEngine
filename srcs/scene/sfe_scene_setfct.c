/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene_setfct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:00:38 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 13:02:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_scene.h"

t_bool	sfe_scene_setfct(t_scene *scene, int (*f_init)(), int (*f_update)(),
			void *param)
{
	scene->f_init = f_init;
	scene->f_update = f_update;
	scene->param = param;
}
