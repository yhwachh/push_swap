NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = 	src/main.c \
		src/all/parse_args.c src/all/ft_split_spaces.c \
		src/all/exit_all.c src/all/stack_utils.c src/all/find_min_and_max.c \
			src/all/sorted.c src/all/find_index.c \
		src/all/swap.c src/all/push.c src/all/rotate.c \
			src/all/rev_rotate.c \
		src/all/sort.c \
		src/utils/ft_atol.c src/utils/ft_bzero.c src/utils/ft_isdigit.c\
		src/utils/ft_putstr_fd.c src/utils/ft_substr.c\
		src/utils/ft_isspace.c src/utils/ft_atoi.c src/utils/ft_putchar_fd.c\
		src/utils/ft_strlen.c src/utils/ft_strcpy.c\

OBJ = $(SRC:.c=.o)

INCDIR = include/

MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "Compiling push_swap :"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Yes"

.c.o:
	@${CC} ${CFLAGS} -I $(INCDIR) -c $< -o $@

clean:
	@echo "Deleting push_swap OBJ files :"
	@rm -f $(OBJ)
	@echo "Yes"

fclean: clean
	@echo "Deleting push_swap :"
	@rm -f $(NAME)
	@echo "Yes"

re: fclean all
