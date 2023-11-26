# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 16:28:01 by dmusulas          #+#    #+#              #
#    Updated: 2023/11/24 16:50:40 by dmusulas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC           = cc
CCA          = ar rcs
CFLAGS       = -Wall -Wextra -Werror
NAME         = libftprintf.a
INCLUDES_DIR = ./include
INCS         = -I $(INCLUDES_DIR) -I $(LIBFT_DIR)
LIBFT_DIR    = ./libft
LIBFT        = $(LIBFT_DIR)/libft.a
OBJS         = $(SRCS:.c=.o)
SRCS         = ./srcs/ft_printf.c\

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CCA) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $> -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
