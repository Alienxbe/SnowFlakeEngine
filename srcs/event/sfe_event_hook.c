/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_event_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:07:22 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 11:48:16 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_window.h"
#include "mlx.h"

void	sfe_event_hook(t_window const *win, int event, int (*f)(), void *param)
{
	if (win->win_ptr && f)
		mlx_hook(win->win_ptr, event, (1L << 0), f, param);
}
