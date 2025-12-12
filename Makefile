CC = cc -Wall -Wextra -Werror

NAME = push_swap

ARCS = -ar -rcs

SOURCE = push_swap.c \
	srcs/ft_atoi.c \
	srcs/ft_check_args.c \
	srcs/ft_check_dup.c \
	srcs/ft_check_error.c \
	srcs/ft_error.c \
	srcs/ft_free.c \
	srcs/ft_parsing.c \
	srcs/ft_split.c \
	srcs/ft_strlen.c \
	srcs/lst_utils.c \
	srcs/lst_utils2.c \
	operations/push_stack.c \
	operations/reverse_rotate_stack.c \
	operations/rotate_stack.c \
	operations/swap_stack.c \

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