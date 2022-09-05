/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_new_scene.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:34:49 by mykman            #+#    #+#             */
/*   Updated: 2022/09/05 16:38:06 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe_scene.h"

t_scene	sfe_new_scene(t_sfe *sfe, int (*f_init)(), int (*f_update)(),
	void *param)
{
	return (sfe_scene_new(&sfe->win.img, f_init, f_update, param));
}
