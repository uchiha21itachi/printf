# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yassharm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/16 06:06:47 by yassharm          #+#    #+#              #
#    Updated: 2020/02/16 06:06:51 by yassharm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile template for a shared library in C

NAME = libftprintf.a
CC = gcc  # C compiler
CFLAGS = -Wall -Werror -Wextra -I. -c  # C flags
RM = rm -f   # rm command


SRCS = ft_printf.c \
ft_printf_utils.c \
ft_printf_libft_utils.c \
parser_utils.c \
ft_itoa.c \
parse_c.c \
parse_s.c \
parse_p.c \
parse_d.c \
parse_u.c \


OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

all: ${NAME}

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

$(B_OBJS):$(B_SRCS)
	$(CC) $(CFLAGS) $(B_SRCS)

bonus: $(OBJS) $(B_OBJS)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJS) $(B_OBJS)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
