SDL_FLAGS = -lSDL2
CFLAGS = -Wall -Wextra -Werror
CC = gcc

NAME = chess
SRC = ./src/

SRCS = $(SRC)main.c

$(NAME):	all

all:	$(SRCS)
	$(CC) $(SRCS) $(CFLAGS) $(SDL_FLAGS) -o $(NAME)
