CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -I include
AR = ar
FILE_EXTENSION := .c

NAME := libftprintf.a

SRC_DIR = srcs
INCLUDE_DIR := include
OBJ_DIR = obj

H_FILES = $(INCLUDE_DIR)/ft_printf.h

SRC_FILES = $(SRC_DIR)/convert.c \
			$(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/number_formatter.c \
			$(SRC_DIR)/string_formatter.c \
			$(SRC_DIR)/utils.c

OBJ_FILES = $(SRC_DIR)/convert.o \
			$(SRC_DIR)/ft_printf.o \
			$(SRC_DIR)/number_formatter.o \
			$(SRC_DIR)/string_formatter.o \
			$(SRC_DIR)/utils.o

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) rc $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(H_FILES)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re