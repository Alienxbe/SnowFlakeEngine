/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:52:08 by mykman            #+#    #+#             */
/*   Updated: 2022/08/19 22:24:40 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe_window.h"
#include "mlx.h"
#include <stdlib.h>

void	sfe_destroy(t_sfe *sfe)
{
	if (!sfe)
		return ;
	sfe_window_destroy(sfe->win);
	free(sfe->mlx_ptr);
	free(sfe);
}
