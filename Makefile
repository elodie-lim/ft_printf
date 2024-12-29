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

TEST_EXEC = test_ft_printf
TEST_SRC = test/test_main.c

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@echo "Creating $(NAME)..."
	$(AR) rc $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(H_FILES)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	rm -rf $(OBJ_DIR)
	rm -f $(TEST_EXEC)

fclean: clean
	@echo "Removing $(NAME)..."
	rm -f $(NAME)

norme:
	@echo "Running norminette..."
	norminette $(SRC_FILES) $(H_FILES)

test: $(NAME) $(TEST_SRC)
	@echo "Compiling test executable..."
	$(CC) $(CFLAGS) -I include $(TEST_SRC) $(NAME) -o $(TEST_EXEC)
	@echo "Running tests..."
	./$(TEST_EXEC)

update:
	@echo "Updating git repository..."
	git add .
	git commit -m "Update project"
	git push

re: fclean all

.PHONY: all clean fclean re test norme