/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_color.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:47:02 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 10:10:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_COLOR_H
# define SFE_COLOR_H

# include "t_img.h"
# include "t_color.h"

# include "ft_point.h"
# include "ft_bool.h"

t_color	sfe_color_get(t_img img, t_point pos);
t_bool	sf_color_replace(t_img img, t_color old, t_color new);

#endif
