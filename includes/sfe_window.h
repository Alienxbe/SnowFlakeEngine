/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:22:57 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 13:53:33 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_WINDOW_H
# define SFE_WINDOW_H

# include "t_window.h"
# include "t_scene.h"

t_window	sfe_window_new(void *mlx_ptr, t_point size, char const *name,
				int (*f)());
t_bool		sfe_window_put_image(t_window const *win, t_img img,
				t_point pos);
t_bool		sfe_window_put_scene(t_window const *win, t_scene scene);
void		sfe_window_update(t_window const *win);
void		sfe_window_destroy(t_window *win);

#endif
