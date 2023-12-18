/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_hook_on_keyup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:36:04 by marykman          #+#    #+#             */
/*   Updated: 2023/12/18 14:59:21 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "t_window.h"
#include "sfe_event.h"

void	sfe_hook_on_keyup(t_window win, int (*f)(), void *param)
{
	if (win.win_ptr && f)
		mlx_hook(win.win_ptr, ON_KEYUP, (1L << 1), f, param);
}
