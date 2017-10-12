SOURCE_FILES=$(shell find lib/ -type f -name '*.c')
BINARY_FILES=$(patsubst lib/%.c, bin/%.o, $(SOURCE_FILES))

all: $(BINARY_FILES)

bin/%.o: lib/%.c
	@mkdir -p "$(@D)"
	@gcc -o "$@" "$<"

clean:
	@rm -rf bin/*

.PHONY: all clean
