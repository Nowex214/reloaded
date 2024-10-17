NAME = ft_display_file
GCC = gcc
SRC = ft_display_file.c 
CFLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) -no-pie
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
