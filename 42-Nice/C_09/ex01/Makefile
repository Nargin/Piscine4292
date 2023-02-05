CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -I includes/ -c $< -o ${<:.c=.o}

libft.a : $(OBJS)
	ar rcs libft.a $(OBJS)

all : libft.a

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f libft.a

re : fclean all