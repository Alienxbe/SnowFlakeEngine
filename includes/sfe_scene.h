/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_scene.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:41:44 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 14:35:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_SCENE_H
# define SFE_SCENE_H

# include "t_scene.h"
# include "t_color.h"

# include "ft_point.h"

t_scene	sfe_scene_new(void *mlx_ptr, t_point size);
t_bool	sfe_scene_setbg(t_scene scene, t_color c);
void	sfe_scene_setfct(t_scene *scene, int (*f_init)(), int (*f_update)(),
			void *param);

#endif
