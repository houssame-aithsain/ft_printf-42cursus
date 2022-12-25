# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 17:02:57 by hait-hsa          #+#    #+#              #
#    Updated: 2022/10/26 18:50:50 by hait-hsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_pxx.c ft_putnbru.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_count_numb.c ft_phex.c ft_xhex.c ft_printf.c ft_count_numb_hex.c

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