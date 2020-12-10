SRCS	=	ft_printf.c \
			parser/ft_flags.c \
			parser/ft_parser.c \
			process/ft_type_init.c \
			process/ft_cs_type.c \
			process/ft_di_type.c \
			process/ft_dwx_type.c \
			process/ft_u_type.c \
			process/ft_p_type.c \
			process/ft_upx_type.c \

OBJS		= $(SRCS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
LIBFILES	= libft/*.c

INCLUDES = -I./includes

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			#$(CC) $(CFLAGS) $(SRCS) $(LIBFILES)
			make -C ./libft

			cp libft/libft.a $(NAME)
			ar rcs $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
			make clean -C libft

fclean:		clean
			$(RM) $(NAME)
			make clean -C libft

re:			fclean $(NAME)