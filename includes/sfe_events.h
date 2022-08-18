/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_events.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:26:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/18 12:25:05 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_EVENTS_H
# define SFE_EVENTS_H

enum e_events
{
	ON_KEYDOWN = 2,
	ON_KEYUP,
	ON_MOUSEDOWN,
	ON_MOUSEUP,
	ON_MOUSEMOVE,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

#endif
