SRCDIR	= ./
OBJDIR	= ./
SRCS	= ${SRCDIR}ft_memset.c \
		  ${SRCDIR}ft_bzero.c \
		  ${SRCDIR}ft_memccpy.c \
		  ${SRCDIR}ft_strrchr.c \
		  ${SRCDIR}ft_strnstr.c \
		  ${SRCDIR}ft_atoi.c \
		  ${SRCDIR}ft_isdigit.c \
		  ${SRCDIR}ft_memchr.c \
		  ${SRCDIR}ft_strdup.c \
		  ${SRCDIR}ft_strlcat.c \
		  ${SRCDIR}ft_calloc.c \
		  ${SRCDIR}ft_isalnum.c \
		  ${SRCDIR}ft_isalpha.c \
		  ${SRCDIR}ft_isascii.c \
		  ${SRCDIR}ft_isprint.c \
		  ${SRCDIR}ft_memcmp.c \
		  ${SRCDIR}ft_strchr.c \
		  ${SRCDIR}ft_strncmp.c \
		  ${SRCDIR}ft_tolower.c \
		  ${SRCDIR}ft_toupper.c \
		  ${SRCDIR}ft_strlcpy.c \
		  ${SRCDIR}ft_substr.c \
		  ${SRCDIR}ft_strjoin.c \
		  ${SRCDIR}ft_strtrim.c \
		  ${SRCDIR}ft_split.c \
		  ${SRCDIR}ft_itoa.c \
		  ${SRCDIR}ft_strmapi.c \
		  ${SRCDIR}ft_putchar_fd.c \
		  ${SRCDIR}ft_putstr_fd.c \
		  ${SRCDIR}ft_putendl_fd.c \
		  ${SRCDIR}ft_putnbr_fd.c \
		  ${SRCDIR}ft_putnbr16_fd.c \
		  ${SRCDIR}ft_strlen.c
OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= 	$(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
