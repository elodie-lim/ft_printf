CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -I include
FILE_EXTENSION := .c
AR := ar

NAME := libftprintf.a

SRC_DIR = srcs
BUILD_DIR = build
HEADER = include/ft_printf.h

TEST_SRC = test/main.c
TEST_EXEC = test_ft_printf

SRCS := $(shell find $(SRC_DIR) -name '*$(FILE_EXTENSION)')

OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rc $(NAME) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	rm -rf $(BUILD_DIR)

fclean: clean
	@echo "Removing $(NAME)..."
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

norme:
	@echo "Running norminette..."
	norminette $(SRCS) $(HEADER)

test: $(NAME) $(TEST_SRC)
	@echo "Compiling test executable..."
	$(CC) $(CFLAGS) -I include $(TEST_SRC) $(NAME) -o $(TEST_EXEC)
	@echo "Running tests..."
	./$(TEST_EXEC)
