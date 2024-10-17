#variable

NAME = 	libft.a
SRCS = srcs/ft_*.c
OBJS = ${SRCS: .c=.o}
GCC = CC
CFLAGS = -Wall -Wextra -Werror
LIB_S = ar rcs

#rules
all: ${NAME}
$(NAME): ${OBJS}
	${LIB_S} ${NAME} ${OBJS}

%.o: %.c
	${GCC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
re: fclean all
