/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:20:13 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 22:22:34 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"
#include "sfe_image.h"
#include "mlx.h"

void	sfe_window_destroy(t_window win)
{
	if (win.mlx_ptr && win.win_ptr)
	{
		sfe_image_destroy(win.mlx_ptr, win.img);
		mlx_destroy_window(win.mlx_ptr, win.win_ptr);
	}
}
