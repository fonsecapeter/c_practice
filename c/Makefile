SOURCE_FILES=$(shell find lib/ -type f -name '*.c')
BINARY_FILES=$(patsubst lib/%.c, bin/%, $(SOURCE_FILES))

all: $(BINARY_FILES)

bin/%: lib/%.c
	@mkdir -p "$(@D)"
	@gcc -Wall -std=c11 -o "$@" "$<"

clean:
	@rm -rf bin/*

.PHONY: all clean
