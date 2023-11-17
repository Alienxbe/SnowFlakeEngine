/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_event.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:26:40 by mykman            #+#    #+#             */
/*   Updated: 2023/11/17 18:58:59 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_EVENT_H
# define SFE_EVENT_H

# include "t_sfe.h"
# include "t_events.h"

void	sfe_event_hook(t_window win, int event, int (*f)(), void *param);

#endif
