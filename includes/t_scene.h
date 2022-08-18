/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_scene.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:40:17 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 14:14:51 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_SCENE_H
# define T_SCENE_H

# include "t_img.h"

typedef struct s_scene
{
	t_img	img;
	int		(*f_init)();
	int		(*f_update)();
	void	*param;
}	t_scene;

#endif
