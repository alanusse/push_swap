# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 13:43:05 by aglanuss          #+#    #+#              #
#    Updated: 2024/03/11 23:05:31 by aglanuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

INCLUDES = ./includes/push_swap.h ./includes/utils.h ./includes/algorithms.h

SRCS = push_swap.c error_exit.c lists.c check_arguments.c push.c algorithms.c sort_medium_stack.c\
			 sort_three_numbers.c rotate.c rev_rotate.c swap.c is_arguments_sorted.c\
			 ./utils/ft_atoi.c ./utils/get_lst_content_by_idx.c ./utils/ft_atol.c\
			 ./utils/ft_isdigit.c ./utils/ft_strchr.c ./utils/ft_strcmp.c\
			 ./utils/ft_strlen.c ./utils/is_lst_sorted.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c Makefile $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re