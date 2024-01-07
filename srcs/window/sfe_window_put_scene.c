/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_put_scene.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:23:26 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 12:04:59 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"

t_bool	sfe_window_put_scene(t_window const *win, t_scene scene)
{
	if (!win || !scene.img)
		return (false);
	return (sfe_window_put_image(win, *scene.img, new_point(0, 0)));
}
