/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:08:24 by mykman            #+#    #+#             */
/*   Updated: 2022/08/24 02:23:27 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define T_SEC	1000000

int	main(void)
{
	double	pxs;
	double	ips;
	double	pxi;
	double	pos;

	pxs = 2;
	ips = (double)1 / (double)239;
	pxi = pxs * ips;
	pos = 0;
	while (1)
	{
		printf("%f | %f | %f | %d\n", ips, pos, pxi, (int)pos);
		pos += pxi;
		usleep(T_SEC / 239);
	}
}