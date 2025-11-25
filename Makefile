CC = cc -Wall -Wextra -Werror

NAME = libftprintf.a

ARCS = -ar -rcs

SOURCE = push_swap.c \
	push_swap_utils.c \
	push_swap_lst_utils.c \
	

HEADER = push_swap.h

OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re