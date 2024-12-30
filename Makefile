CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -I include
FILE_EXTENSION := .c

NAME := libftprintf.a

SRC_DIR = srcs

SRCS := $(shell find $(SRC_DIR) -name '*$(FILE_EXTENSION)')

OBJS := $(SRCS:$(FILE_EXTENSION)=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
