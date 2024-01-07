/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfe_event.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:26:40 by mykman            #+#    #+#             */
/*   Updated: 2024/01/07 11:50:47 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFE_EVENT_H
# define SFE_EVENT_H

# include "t_sfe.h"
# include "t_events.h"

# ifdef LINUX

typedef enum e_sfe_keys
{
	SFE_KEY_A=97,
	SFE_KEY_B,
	SFE_KEY_C,
	SFE_KEY_D,
	SFE_KEY_E,
	SFE_KEY_F,
	SFE_KEY_G,
	SFE_KEY_H,
	SFE_KEY_I,
	SFE_KEY_J,
	SFE_KEY_K,
	SFE_KEY_L,
	SFE_KEY_M,
	SFE_KEY_N,
	SFE_KEY_O,
	SFE_KEY_P,
	SFE_KEY_Q,
	SFE_KEY_R,
	SFE_KEY_S,
	SFE_KEY_T,
	SFE_KEY_U,
	SFE_KEY_V,
	SFE_KEY_W,
	SFE_KEY_X,
	SFE_KEY_Y,
	SFE_KEY_Z,
	SFE_KEY_LEFT=65361,
	SFE_KEY_UP,
	SFE_KEY_RIGHT,
	SFE_KEY_DOWN,
	SFE_KEY_ESC=65307,
	SFE_KEY_DEL=65288,
	SFE_KEY_ENTER=65293,
	SFE_KEY_SPACE=32
}	t_sfe_keys;

# elif MACOS

typedef enum e_sfe_keys
{
	SFE_KEY_A=0,
	SFE_KEY_B=11,
	SFE_KEY_C=8,
	SFE_KEY_D=2,
	SFE_KEY_E=14,
	SFE_KEY_F=3,
	SFE_KEY_G=5,
	SFE_KEY_H=4,
	SFE_KEY_I=34,
	SFE_KEY_J=38,
	SFE_KEY_K=40,
	SFE_KEY_L=37,
	SFE_KEY_M=46,
	SFE_KEY_N=45,
	SFE_KEY_O=31,
	SFE_KEY_P=35,
	SFE_KEY_Q=12,
	SFE_KEY_R=15,
	SFE_KEY_S=1,
	SFE_KEY_T=17,
	SFE_KEY_U=32,
	SFE_KEY_V=9,
	SFE_KEY_W=13,
	SFE_KEY_X=7,
	SFE_KEY_Y=16,
	SFE_KEY_Z=6,
	SFE_KEY_LEFT=123,
	SFE_KEY_RIGHT,
	SFE_KEY_DOWN,
	SFE_KEY_UP,
	SFE_KEY_ESC=53,
	SFE_KEY_DEL=51,
	SFE_KEY_ENTER=36,
	SFE_KEY_SPACE=49
}	t_sfe_keys;

# else

typedef enum e_sfe_keys
{
	SFE_KEY_A=10000,
	SFE_KEY_B,
	SFE_KEY_C,
	SFE_KEY_D,
	SFE_KEY_E,
	SFE_KEY_F,
	SFE_KEY_G,
	SFE_KEY_H,
	SFE_KEY_I,
	SFE_KEY_J,
	SFE_KEY_K,
	SFE_KEY_L,
	SFE_KEY_M,
	SFE_KEY_N,
	SFE_KEY_O,
	SFE_KEY_P,
	SFE_KEY_Q,
	SFE_KEY_R,
	SFE_KEY_S,
	SFE_KEY_T,
	SFE_KEY_U,
	SFE_KEY_V,
	SFE_KEY_W,
	SFE_KEY_X,
	SFE_KEY_Y,
	SFE_KEY_Z,
	SFE_KEY_LEFT,
	SFE_KEY_UP,
	SFE_KEY_RIGHT,
	SFE_KEY_DOWN,
	SFE_KEY_ESC,
	SFE_KEY_DEL,
	SFE_KEY_ENTER,
	SFE_KEY_SPACE
}	t_sfe_keys;

# endif

void	sfe_event_hook(t_window const *win, int event,
			int (*f)(), void *param);
void	sfe_hook_on_keydown(t_window const *win, int (*f)(), void *param);
void	sfe_hook_on_keyup(t_window const *win, int (*f)(), void *param);

#endif
