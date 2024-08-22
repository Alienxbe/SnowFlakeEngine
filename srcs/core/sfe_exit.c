/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:53:01 by mykman            #+#    #+#             */
/*   Updated: 2024/08/22 18:32:08 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_sfe.h"
#include "sfe.h"
#include "ft_printf.h"
#include <stdlib.h>

int	sfe_exit(t_sfe *sfe)
{
	sfe_destroy(sfe);
	exit(EXIT_SUCCESS);
}
