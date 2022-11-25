GCC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

.c.o :
	$(GCC) $(FLAGS) -I includes/ -c $< -o ${<:.c=.o}

libft.a : $(OBJS)
	ar rcs libft.a $(OBJS)

all : libft.a

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f libft.a

re : fclean all
