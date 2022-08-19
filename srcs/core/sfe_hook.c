/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:07:22 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 00:11:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "mlx.h"

void	sfe_hook(t_sfe *sfe, int event, int (f)(), void *param)
{
	if (sfe && f)
		mlx_hook(sfe->mlx_ptr, event, 0, f, param);
}
