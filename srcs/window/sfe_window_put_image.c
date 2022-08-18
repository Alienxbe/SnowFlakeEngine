/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_put_image.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 06:24:07 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 14:29:35 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"
#include "mlx.h"

t_bool	sfe_window_put_image(t_window win, t_img img, t_point pos)
{
	if (!issmaller_point(pos, win.size)
		|| !issmaller_point(add_point(pos, img.size),
			add_point(win.size, (t_point){1, 1}))
		|| !isbigger_point(pos, (t_point){-1, -1}))
		return (false);
	mlx_put_image_to_window(win.mlx_ptr, win.win_ptr, img.img, pos.x, pos.y);
	return (true);
}
