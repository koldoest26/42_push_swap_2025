NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -f

INCLUDES = -I.

FILES = ft_atoi \
		ft_bzero \
		ft_calloc \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		ft_strdup \
		ft_strlcat \
		ft_strlcpy \
		ft_strlen \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_tolower \
		ft_toupper \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putstr_fd

FILES_BONUS = ft_lstnew \
			  ft_lstadd_front \
			  ft_lstsize \
			  ft_lstlast \
			  ft_lstadd_back \
			  ft_lstdelone \
			  ft_lstclear \
			  ft_lstiter \
			  ft_lstmap

SRCS = $(FILES:%=%.c)
SRCS_BONUS = $(FILES_BONUS:%=%.c)

OBJS = $(FILES:%=%.o)
OBJS_BONUS = $(FILES_BONUS:%=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS_BONUS) $(NAME)
	$(AR) $(NAME) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
