/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_update.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:09:54 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 13:53:29 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"

void	sfe_window_update(t_window const *win)
{
	if (win)
		sfe_window_put_image(win, win->img, (t_point){0});
}
