CC := gcc
CFLAGS :=
OUTPUT := myprogram
SRC := main.c

.PHONY: all compile run clean

all: run

compile: $(OUTPUT)

$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: compile
	./$(OUTPUT)

clean:
	rm -f $(OUTPUT)
