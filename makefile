# Makefile

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
SRC = *.c
NAME = main.out
RM = rm -f

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)
