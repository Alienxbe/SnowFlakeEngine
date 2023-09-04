# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    config.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marykman <marykman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 00:12:33 by mykman            #+#    #+#              #
#    Updated: 2023/09/04 19:41:49 by marykman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
if [ ! -d libft ]
then
	git clone https://github.com/Alienxbe/libft libft
else
	git -C libft pull
fi
