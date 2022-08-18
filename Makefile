# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mykman <mykman@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 00:02:10 by mykman            #+#    #+#              #
#    Updated: 2022/08/18 14:31:42 by mykman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation
CC				:=	@gcc
CFLAGS			:=	-Wall -Wextra -Werror

# Colors
RED				:=	[38;5;9m
GREEN			:=	[38;5;10m
BLUE			:= 	[38;5;14m
YELLOW			:=	[38;5;226m
RESET			:=	[38;5;7m
PREFIX			=	[${YELLOW}${FT}${RESET}]		

# Variables
FT				:=	libsfe
NAME			:=	${FT}.a
SRCS_PATH		:=	srcs
OBJS_PATH		:=	objs

LIBFT_FOLDER	:=	Libft
MLX_FOLDER		:=	minilibx

# Files
INCLUDES		:=	-I./includes \
					-I ${LIBFT_FOLDER}/includes \
					-I ${MLX_FOLDER}/includes
LIBS			:=	-L ${LIBFT_FOLDER} -lft \
					-L ${MLX_FOLDER} -lmlx

SRCS_COLOR		:=	sfe_color_get.c \
					sfe_color_replace.c
SRCS_ENGINE		:=
SRCS_IMAGE		:=	sfe_image_cpy.c \
					sfe_image_new.c \
					sfe_image_sub.c \
					sfe_xpm_file_to_image.c
SRCS_PIXEL		:=	sfe_pixel_area_cpy.c \
					sfe_pixel_cpy.c \
					sfe_pixel_fill.c \
					sfe_pixel_iter.c \
					sfe_pixel_put.c
SRCS_SCENE		:=	sfe_scene_new.c \
					sfe_scene_setbg.c \
					sfe_scene_setfct.c
SRCS_WINDOW		:=	sfe_window_new.c \
					sfe_window_put_image.c \
					sfe_window_put_scene.c \
					sfe_window_update.c
SRCS			:=	$(addprefix ${SRCS_PATH}/color/, ${SRCS_COLOR})
SRCS			+=	$(addprefix ${SRCS_PATH}/engine/, ${SRCS_ENGINE})
SRCS			+=	$(addprefix ${SRCS_PATH}/image/, ${SRCS_IMAGE})
SRCS			+=	$(addprefix ${SRCS_PATH}/pixel/, ${SRCS_PIXEL})
SRCS			+=	$(addprefix ${SRCS_PATH}/scene/, ${SRCS_SCENE})
SRCS			+=	$(addprefix ${SRCS_PATH}/window/, ${SRCS_WINDOW})
OBJS			:=	$(patsubst ${SRCS_PATH}/%.c, ${OBJS_PATH}/%.o, ${SRCS})

# Rules
${OBJS_PATH}/%.o:	${SRCS_PATH}/%.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@
	@echo "${PREFIX}Compilation of $<..."

$(NAME):	${OBJS}
	@ar -rcs $@ $^

all:	$(NAME)

clean:
	@rm -f ${OBJS}

fclean:
	@rm -f ${NAME} ${OBJS}

re:		fclean all

.PHONY:	all clean fclean re
