/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:20:13 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 11:59:35 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"
#include "sfe_image.h"
#include "mlx.h"

void	sfe_window_destroy(t_window *win)
{
	if (win && win->mlx_ptr && win->win_ptr)
	{
		sfe_image_destroy(win->mlx_ptr, &win->img);
		mlx_destroy_window(win->mlx_ptr, win->win_ptr);
		*win = (t_window){0};
	}
}
