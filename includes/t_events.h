/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_events.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:22:32 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:24:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_EVENTS_H
# define T_EVENTS_H

typedef enum e_events
{
	ON_KEYDOWN = 2,
	ON_KEYUP,
	ON_MOUSEDOWN,
	ON_MOUSEUP,
	ON_MOUSEMOVE,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
}	t_events;

#endif
