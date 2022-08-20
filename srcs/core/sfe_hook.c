/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:26:58 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:28:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe_event.h"

void	sfe_hook(t_sfe *sfe, int event, int (*f)(), void *param)
{
	if (sfe)
		sfe_event_hook(sfe->win, event, f, param);
}