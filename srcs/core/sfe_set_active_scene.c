/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_set_active_scene.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:44:34 by mykman            #+#    #+#             */
/*   Updated: 2022/10/07 14:31:02 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include <stddef.h>

void	sfe_set_active_scene(t_sfe *sfe, t_scene *scene)
{
	if (sfe && scene)
	{
		if (sfe->active_scene)
			sfe->active_scene->sfe = NULL;
		sfe->active_scene = scene;
		if (sfe->active_scene->f_init)
			if (!sfe->active_scene->f_init(sfe->active_scene->param))
				sfe_exit(sfe);
		scene->sfe = sfe;
	}
}
