CC = clang
CFLAGS = -std=c99

SRC = $(wildcard */*.c)
EXEC = $(SRC:.c=) 

%: %.c
	$(CC) $(CFLAGS) $< -o $@

all: $(EXEC)

clean:
	rm -i $(EXEC)
