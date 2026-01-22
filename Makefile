NAME = push_swap
SOURCES = algorithm.c error_free.c init_nodes.c push_swap_finish.c push_swap.c push.c reverse_rotate.c rotate.c stack_init.c stack_utils.c swap.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft

clean:
	rm -f $(OBJECTS)
	make -C libft clean

fclean: clean
	rm -f push_swap libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re
