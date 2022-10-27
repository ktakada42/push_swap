# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 21:35:19 by ktakada           #+#    #+#              #
#    Updated: 2022/10/16 21:35:20 by ktakada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCSDIR := ./src/

SRCS := coordinate_compression.c \
		doubly_linked_list.c \
		doubly_linked_list_operation.c \
		merge_sort.c \
		parse_args.c \
		push.c \
		push_swap_atoi.c \
		reverse_rotate.c \
		rotate.c \
		sort_small_list.c \
		swap.c \
		utils.c \

SRCS := $(addprefix $(SRCSDIR), $(SRCS))

LIBFTDIR := ./libft

LIBFTAR := libft.a

.PHONY: all
all: $(NAME)

.PHONY: $(NAME)
$(NAME): $(SRCS)
	make bonus -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTAR) .
	$(CC) $(CFLAGS) main.c $(SRCS) $(LIBFTAR) -o $(NAME)

.PHONY: clean
clean:
	make -C $(LIBFTDIR) clean
	rm -f $(OBJS)

.PHONY: fclean
fclean:
	make -C $(LIBFTDIR) fclean
	rm -f $(LIBFTAR)
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: norm
norm:
	norminette | grep Error
