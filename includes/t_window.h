/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_window.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:20:34 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:58:49 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_WINDOW_H
# define T_WINDOW_H

# include "ft_point.h"
# include "t_img.h"

typedef struct s_window
{
	void		*win_ptr;
	const char	*name;
	t_point		size;
	t_img		img;
}	t_window;

#endif
