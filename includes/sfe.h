/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:26:06 by mykman            #+#    #+#             */
/*   Updated: 2022/09/05 13:14:23 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_H
# define SFE_H

# include "ft_point.h"
# include "sfe_scene.h"

# define SFE_DEFAULT_FPS_MAX	60

typedef struct s_sfe	t_sfe;

t_sfe	*sfe_init(const char *name, t_point size);
void	sfe_set_active_scene(t_sfe *sfe, t_scene *scene);
void	sfe_hook(t_sfe *sfe, int event, int (*f)(), void *param);
void	sfe_destroy(t_sfe *sfe);

void	sfe_move(t_sfe *sfe, t_point *pos, t_point speed);

#endif
