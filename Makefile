NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= algorithm.c \
			  error_free.c \
			  init_nodes.c \
			  push_swap_finish.c \
			  push_swap.c \
			  push.c \
			  reverse_rotate.c \
			  rotate.c \
			  stack_init.c \
			  stack_utils.c \
			  swap.c

OBJS		= $(SRCS:.c=.o)

INCLUDES	= -I. -Ilibft

LIBFT_DIR	= libft
LIBFT_A		= $(LIBFT_DIR)/libft.a

all: $(NAME)

$(LIBFT_A):
	make -C $(LIBFT_DIR)


%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) -o $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
