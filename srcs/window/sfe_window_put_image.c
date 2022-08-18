/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_put_image.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 06:24:07 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:59:14 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"
#include "mlx.h"

t_bool	sfe_window_put_image(void *mlx_ptr, t_window win, t_img img, t_point pos)
{
	if (!mlx_ptr)
		return (false);
	if (!issmaller_point(pos, win.size)
		|| !issmaller_point(add_point(pos, img.size),
			add_point(win.size, (t_point){1, 1}))
		|| !isbigger_point(pos, (t_point){-1, -1}))
		return (false);
	mlx_put_image_to_window(mlx_ptr, win.win_ptr, img.img, pos.x, pos.y);
	return (true);
}
