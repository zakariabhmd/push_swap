# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 23:22:38 by zbabahmi          #+#    #+#              #
#    Updated: 2023/06/19 17:41:08 by zbabahmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = @cc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c errors.c rules.c rules1.c sort1.c utiles.c sort2.c utiles2.c main2.c
OBJ = $(SRC:.c=.o)
RM = rm -rf

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all