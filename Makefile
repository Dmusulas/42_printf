# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 16:28:01 by dmusulas          #+#    #+#              #
#    Updated: 2023/11/30 16:06:27 by dmusulas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC           = cc
CCA          = ar rcs
CFLAGS       = -Wall -Wextra -Werror -g
NAME         = libftprintf.a
INCLUDES_DIR = ./include
INCS         = -I $(INCLUDES_DIR) -I $(LIBFT_DIR)
LIBFT_DIR    = ./libft
LIBFT_FILENAME = libft.a
LIBFT        = $(LIBFT_DIR)/$(LIBFT_FILENAME)
OBJS         = $(SRCS:.c=.o)
SRCS         = ./srcs/ft_printf.c \
			   ./srcs/ft_convert_s.c \
			   ./srcs/ft_convert_c.c \
			   ./srcs/ft_convert_p.c \
			   ./srcs/ft_convert_nums.c \
			   ./srcs/ft_convert_d.c \
			   ./srcs/ft_convert_ll.c \
			   ./srcs/ft_convert_x.c \
			   ./srcs/ft_convert_u.c

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CCA) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) .
	mv $(LIBFT_FILENAME) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
