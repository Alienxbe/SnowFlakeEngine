/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:26:06 by mykman            #+#    #+#             */
/*   Updated: 2022/09/05 16:38:56 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_H
# define SFE_H

# include "ft_point.h"
# include "sfe_scene.h"

# define SFE_DEFAULT_FPS_MAX	60

typedef struct s_sfe	t_sfe;

// Main functions
t_sfe	*sfe_init(const char *name, t_point size);
void	sfe_set_active_scene(t_sfe *sfe, t_scene *scene);
void	sfe_set_max_fps(t_sfe *sfe, unsigned int fps);
void	sfe_hook(t_sfe *sfe, int event, int (*f)(), void *param);
void	sfe_loop(t_sfe *sfe);
void	sfe_destroy(t_sfe *sfe);

// Scene functions
t_scene	sfe_new_scene(t_sfe *sfe, int (*f_init)(), int (*f_update)(),
	void *param);

// Function not yet fully implemented should not use
void	sfe_move(t_sfe *sfe, t_point *pos, t_point speed);

#endif
