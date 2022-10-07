/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:53:01 by mykman            #+#    #+#             */
/*   Updated: 2022/10/07 14:33:06 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "ft_printf.h"
#include <stdlib.h>

int	sfe_exit(t_sfe *sfe)
{
	ft_printf("closing window...\n");
	sfe_destroy(sfe);
	exit(EXIT_SUCCESS);
}
