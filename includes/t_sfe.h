/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_sfe.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:31:24 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 10:10:57 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_SFE_H
# define T_SFE_H

# include "t_window.h"
# include "t_scene.h"

typedef struct s_sfe
{
	void			*mlx_ptr;
	t_window		win;
	t_scene			*active_scene;
	unsigned int	frame_rendering_time;
	unsigned int	fps_max;
	unsigned int	fps;
}	t_sfe;

#endif
