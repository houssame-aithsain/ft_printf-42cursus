# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 17:02:57 by hait-hsa          #+#    #+#              #
#    Updated: 2023/02/20 21:46:15 by hait-hsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PT = ft_printf/

SRC =  ${PT}ft_pxx.c ${PT}ft_putnbru.c ${PT}ft_putnbr.c ${PT}ft_putstr.c \
		${PT}ft_putchar.c ${PT}ft_count_numb.c ${PT}ft_phex.c ${PT}ft_xhex.c \
		${PT}ft_printf.c ${PT}ft_count_numb_hex.c

CC = cc

FLAGS =  -Wall -Wextra -Werror

RM = rm -f

NAME = libftprintf.a

OBJECTS = ${SRC:.c=.o}

%.o : %.c
		${CC} ${FLAGS} -c $< -o $@

${NAME} : ${OBJECTS}
			ar rcs ${NAME} ${OBJECTS}

all : ${NAME}

fclean : clean
		${RM} ${NAME}

clean :
		${RM} ${OBJECTS}
re : fclean all

.PHONY: all fclean clean re