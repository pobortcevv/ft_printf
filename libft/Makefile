# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngragas <ngragas@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/04 20:29:14 by ngragas           #+#    #+#              #
#    Updated: 2020/11/20 21:39:51 by ngragas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror #-O3
SOURCES =	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isprint.c	\
			ft_isascii.c	ft_toupper.c	ft_tolower.c	ft_strmapi.c	\
			ft_strlen.c		ft_strncmp.c	ft_memcmp.c						\
			ft_memchr.c		ft_strchr.c		ft_strrchr.c	ft_strnstr.c	\
			ft_strlcpy.c	ft_memcpy.c		ft_memccpy.c	ft_memmove.c	\
			ft_calloc.c		ft_bzero.c		ft_memset.c						\
			ft_strdup.c		ft_substr.c		ft_strlcat.c	ft_strjoin.c	\
			ft_strtrim.c	ft_split.c		\
			ft_atoi.c		ft_itoa.c		\
			ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c
SOURCES_BONUS =	ft_lstnew.c		ft_lstadd_front.c	ft_lstadd_back.c	\
				ft_lstdelone.c	ft_lstsize.c		ft_lstlast.c		\
				ft_lstclear.c	ft_lstiter.c		ft_lstmap.c
OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)
NAME = libft.a
HEADER = libft.h
RM = rm -f

.PHONY: all clean fclean re bonus
all: $(NAME)
clean:
	@$(RM) $(OBJECTS)
	@$(RM) $(OBJECTS_BONUS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -o $@ -c $<
$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
bonus: $(NAME) $(OBJECTS_BONUS)
	@ar rcs $(NAME) $(OBJECTS_BONUS)