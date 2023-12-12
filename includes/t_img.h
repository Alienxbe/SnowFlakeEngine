/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_img.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:00:09 by mykman            #+#    #+#             */
/*   Updated: 2023/12/12 10:34:47 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_IMG_H
# define T_IMG_H

# include "ft_point.h"

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
	t_point	size;
}	t_img;

#endif
