/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:22:57 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:25:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_WINDOW_H
# define SFE_WINDOW_H

# include "t_window.h"

t_window	sfe_window_new(void *mlx_ptr, t_point size, char *name,
				int (*f)());
t_bool		sfe_window_put_image(void *mlx_ptr, t_window win, t_img img,
				t_point pos);
void		sfe_window_update(void *mlx_ptr, t_window window);

#endif
