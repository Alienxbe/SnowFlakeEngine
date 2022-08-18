/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_window_put_scene.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:23:26 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 14:29:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_window.h"

t_bool	sfe_window_put_scene(t_window win, t_scene scene)
{
	return (sfe_window_put_image(win, scene.img, new_point(0, 0)));
}
