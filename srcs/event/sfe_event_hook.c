/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:07:22 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:25:26 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_window.h"
#include "mlx.h"

void	sfe_event_hook(t_window win, int event, int (*f)(), void *param)
{
	if (win.win_ptr && f)
		mlx_hook(win.win_ptr, event, 0, f, param);
}
