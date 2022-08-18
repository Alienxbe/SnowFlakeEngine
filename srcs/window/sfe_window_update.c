/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_update.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:09:54 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:22:02 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"

void	sfe_window_update(void *mlx_ptr, t_window window)
{
	sfe_window_put_image(mlx_ptr, window, window.img, (t_point){0});
}
