CC:=gcc
CFLAGS:=-Wall -Werror -Wextra -Iinclude -g -ffreestanding -nostdlib -fno-stack-protector -D_SAFAOS
all: dim.o
dim.o: src/main.c
	$(CC) $(CFLAGS) -c $< -o $@
