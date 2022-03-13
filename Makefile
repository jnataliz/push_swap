NAME = push_swap
CC = gcc
SRC = ./src/main.c ./src/stack.c 
OBJ = $(SRC:./src/%.c=%.o)
LIBFTPRINTF = ft_printf 
CFLAGS =  -Wall -Wextra -Werror -c 
#CFLAGS =  -c 
LIB = ./ft_printf/libftprintf.a

all: $(NAME)

# $(NAME):
# 	make -C $(LIBFTPRINTF)
# 	$(CC) $(CFLAGS) $(SRC)
# 	$(CC) $(OBJ) $(LIB) -o $(NAME)
$(NAME): $(OBJ)
	make -C $(LIBFTPRINTF)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

	
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean: 
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFTPRINTF)
	rm -f $(NAME)

re: fclean all