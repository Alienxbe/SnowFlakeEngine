/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_color.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:47:02 by mykman            #+#    #+#             */
/*   Updated: 2023/11/24 11:44:41 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_COLOR_H
# define SFE_COLOR_H

# include "t_img.h"
# include "t_color.h"

# include "ft_point.h"
# include "ft_bool.h"

t_color	sfe_color_get(t_img img, t_point pos);
t_bool	sfe_color_replace(t_img img, t_color old, t_color new);

#endif
