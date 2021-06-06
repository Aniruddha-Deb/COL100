CC = clang
CFLAGS = -std=c99

SRCDIR = src
EXECDIR = bin

SRC = $(patsubst src/%.c,%.c,$(wildcard src/*.c))
EXEC = $(SRC:.c=) 

$(EXECDIR)/%: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

all: $(patsubst %, $(EXECDIR)/%, $(EXEC))

clean:
	rm $(EXECDIR)/*
