CC = clang
CFLAGS = -std=c99

SRC = $(wildcard */*.c)
EXEC = $(SRC:.c=.out) 

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

all: $(EXEC)

clean:
	rm -i $(EXEC)
