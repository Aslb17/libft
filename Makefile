# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-cham </var/mail/ade-cham>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/29 16:21:36 by ade-cham          #+#    #+#              #
#    Updated: 2020/05/29 16:28:35 by ade-cham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC	 	= gcc
AR		= ar -rcs
CFLAGS	= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror

SRCS	= ft_memset.c
SRCS	+= ft_bzero.c
SRCS	+= ft_memcpy.c
SRCS	+= ft_memccpy.c
SRCS	+= ft_memmove.c
SRCS	+= ft_memchr.c
SRCS	+= ft_memcmp.c
SRCS	+= ft_strlen.c

SRCS	+= ft_calloc.c
SRCS	+= ft_putchar_fd.c
SRCS	+= ft_putstr_fd.c
SRCS	+= ft_putendl_fd.c
SRCS	+= ft_putnbr_fd.c
SRCS	+= ft_isalpha.c
SRCS	+= ft_isdigit.c
SRCS	+= ft_isalnum.c
SRCS	+= ft_isascii.c
SRCS	+= ft_isprint.c
SRCS	+= ft_toupper.c
SRCS	+= ft_tolower.c
SRCS	+= ft_strncmp.c
SRCS	+= ft_atoi.c

SRCS	+= ft_strlcpy.c
SRCS	+= ft_strlcat.c
SRCS	+= ft_strchr.c
SRCS	+= ft_strrchr.c
SRCS	+= ft_strnstr.c
SRCS	+= ft_strdup.c
SRCS	+= ft_substr.c
SRCS	+= ft_strjoin.c
SRCS	+= ft_strtrim.c
SRCS	+= ft_split.c
SRCS	+= ft_itoa.c
SRCS	+= ft_strmapi.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	echo "Cleaning Objs"

fclean:	clean
	$(RM) $(NAME)
	echo "Cleaning Lib"

re:	fclean all

.PHONY:	clean fclean re
