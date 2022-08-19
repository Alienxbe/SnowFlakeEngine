/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:26:06 by mykman            #+#    #+#             */
/*   Updated: 2022/08/20 00:12:15 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_H
# define SFE_H

# include "ft_point.h"

typedef struct s_sfe	t_sfe;

t_sfe	*sfe_init(const char *name, t_point size);
void	sfe_hook(t_sfe *sfe, int event, int (f)(), void *param);
void	sfe_destroy(t_sfe *sfe);

#endif
