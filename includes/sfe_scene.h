/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:41:44 by mykman            #+#    #+#             */
/*   Updated: 2023/11/22 23:45:57 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_SCENE_H
# define SFE_SCENE_H

# include "t_scene.h"
# include "t_color.h"

# include "ft_point.h"

t_scene	sfe_scene_new(t_img *img, void *param);
t_bool	sfe_scene_setbg(t_scene scene, t_color c);

#endif
