/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_event.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:26:40 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 09:28:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_EVENTS_H
# define SFE_EVENTS_H

# include "t_sfe.h"
# include "t_events.h"

void	sfe_event_hook(t_window win, int event, int (*f)(), void *param);

#endif
