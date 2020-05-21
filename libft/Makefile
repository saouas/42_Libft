NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \

OBJ = $(SRCS:.c=.o)

HEADERS = libft.h

$(NAME):
		@gcc $(FLAGS) -c $(SRCS)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
all: $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
