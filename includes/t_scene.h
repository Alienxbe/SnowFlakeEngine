/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_scene.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:40:17 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:38:57 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_SCENE_H
# define T_SCENE_H

# include "t_img.h"
# include "ft_point.h"

typedef struct s_scene
{
	t_img	*img;
	t_point	size;
	void	*param;
	int		(*f_init)();
	int		(*f_update)();
}	t_scene;

#endif
