# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenbajj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 17:21:59 by mbenbajj          #+#    #+#              #
#    Updated: 2022/05/12 17:22:02 by mbenbajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRC = so_long.c error_handling.c ft_check.c ft_utils.c \
		get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) so_long.h
	make bonus -C ./libft
	gcc $(SRC) -o $(NAME) ./libft/libft.a -g

clean :
	make clean -C ./libft
	rm -rf $(OBJ)

fclean :
	make fclean -C ./libft
	rm -rf $(OBJ) $(NAME)

re : fclean all

.PHONY : all clean fclean re