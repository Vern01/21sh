# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 11:58:55 by vivan-de          #+#    #+#              #
#    Updated: 2016/11/15 12:09:44 by vivan-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 21sh

CCFLAGS = gcc -Wall -Werror -Wextra -g3

OBJ = exit_msg.o get_term_info.o init_terminal_data.o prompt_user.o \
ft_getchar.o ft_realloc.o readline.o ft_check_env_var.o ft_free_str_arr.o \
ft_get_env_var.o ft_ft_search_path.o

MAKELIB = make -C libft

MAKELIBCLEAN = make -C libft clean

MAKELIBFCLEAN = make -C libft fclean

$(NAME): $(OBJ)
	$(MAKELIB)
	$(CCFLAGS) -lcurses -Llibft -lft -o $(NAME) main.c $(OBJ)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)
	$(MAKELIBCLEAN)

fclean: clean
	/bin/rm -f $(NAME)
	$(MAKELIBFCLEAN)

re: fclean all
