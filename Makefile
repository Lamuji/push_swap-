CC = gcc -g
AR = ar -rcs
FLAGS = -Wall -Werror -Wextra
NAME = push.a
PROGRAM_NAME = push_swap
SRC = push_swap.c \
	error.c \
	ft_parse.c \
	ft_check_str.c \
	ft_algo.c \
	ft_algo_1.c \
	ft_index.c \
	ft_max.c \
	ft_move.c \
	ft_move_1.c \


OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@$(AR) $(NAME) $(OBJ) 
	@$(CC) $(FLAGS) -g $(NAME) libft/libft.a -o $(PROGRAM_NAME) $?

clean:
	@make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	rm -f $(NAME) $(PROGRAM_NAME)
	
re: fclean all
