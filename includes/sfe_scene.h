/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:41:44 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:59:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_SCENE_H
# define SFE_SCENE_H

# include "t_scene.h"
# include "t_color.h"

# include "ft_point.h"

t_scene	sfe_scene_new(void *mlx_ptr, t_point size);
t_bool	sfe_scene_setbg(t_scene scene, t_color c);

#endif
