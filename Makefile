NAME = minishell

SRC = tty.c

CC = clang

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

LIBFT = Libft

LIBFTA = Libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	# make -C $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	# make clean -C $(LIBFT)
	/bin/rm -f *.o

fclean: clean
	# make fclean -C $(LIBFT)
	/bin/rm -f $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

re: fclean all
