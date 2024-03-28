# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 13:43:05 by aglanuss          #+#    #+#              #
#    Updated: 2024/03/28 12:12:04 by aglanuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

INCLUDES = ./includes/push_swap.h ./includes/utils.h ./includes/algorithms.h\
					 ./includes/movements.h ./includes/lists.h

INCLUDES_TARGETS = $(addprefix src/,$(SRCS))

SRCS = push_swap.c\
			./sort_algorithms/sort_by_chunks.c\
			./sort_algorithms/sort_small_stack.c\
			./utils/get_idx_smallest_num.c\
			./utils/check_arguments.c ./utils/error_exit.c ./utils/lists.c\
			./utils/is_arguments_sorted.c ./utils/ft_atoi.c\
			./utils/get_lst_content_by_idx.c ./utils/ft_atol.c\
			./utils/ft_isdigit.c ./utils/ft_strchr.c ./utils/ft_strcmp.c\
			./utils/ft_strlen.c ./utils/is_lst_sorted.c ./movements/push.c\
			./movements/swap.c ./movements/rotate.c ./movements/rev_rotate.c

SRCS_TARGETS = $(addprefix src/,$(SRCS))

OBJS = $(SRCS_TARGETS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES_TARGETS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c Makefile $(INCLUDES_TARGETS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re