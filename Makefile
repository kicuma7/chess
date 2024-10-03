NAME = chess

CC = cc
CFLAGS = -Wall -Wextra -Werror
I_DIR = -I$(MINILIBX_DIR)

MINILIBX_DIR = libs/minilibx-linux
SRC_DIR = src
OBJ_DIR = obj

MLX_FLAGS = -L$(MINILIBX_DIR) -lmlx -lX11 -lXext -lm

# Arquivos fonte e objeto padrão
SRCS =	$(SRC_DIR)/chess.c	\
		$(SRC_DIR)/free.c


OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

RM = rm -f

all: minilibx $(NAME)

minilibx:
	$(MAKE) -C $(MINILIBX_DIR) all

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(I_DIR) -o $@ $(OBJS) $(MLX_FLAGS)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(MINILIBX_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft minilibx bonus