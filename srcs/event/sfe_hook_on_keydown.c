/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_hook_on_keydown.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:32:54 by marykman          #+#    #+#             */
/*   Updated: 2024/01/07 11:51:05 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "t_window.h"
#include "sfe_event.h"

void	sfe_hook_on_keydown(t_window const *win, int (*f)(), void *param)
{
	if (win->win_ptr && f)
		mlx_hook(win->win_ptr, ON_KEYDOWN, (1L << 0), f, param);
}
