CC:=gcc
CFLAGS:=-Wall -Werror -Wextra
all: dim
dim: src/main.c
	$(CC) $(CFLAGS) $< -o $@
