/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:12:15 by mykman            #+#    #+#             */
/*   Updated: 2022/09/05 16:16:15 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"

void	sfe_move(t_sfe *sfe, t_point *pos, t_point speed)
{
	(void)sfe;
	*pos = add_point(*pos, speed);
}
