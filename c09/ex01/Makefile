SRCS = main.c ft_swap.c
OBJS = $(addprefix ../ex00/, $(SRCS:.c=.o))
NAME = libft.a

CC := gcc
CFLAGS := -W -W -W 

.c.o:
	$(CC) $(CFLAGS) -c -I. $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# .c.o:
# 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

# ${NAME}: ${OBJS}
# 	ar rc ${NAME} ${OBJS}
# 	ar rc ${NAME}

# all: ${NAME}

# clean:
# 	rm -f ${OBJS}

# fclean: clean
# 	rm -f ${NAME}

# re: fclean all