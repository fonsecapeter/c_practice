SOURCE_FILES=$(shell find lib/ -type f -name '*.cpp')
BINARY_FILES=$(patsubst lib/%.cpp, bin/%, $(SOURCE_FILES))

all: $(BINARY_FILES)

bin/%: lib/%.cpp
	@mkdir -p "$(@D)"
	@g++ -Wall -std=c++0x -o "$@" "$<"

clean:
	@rm -rf bin/*

.PHONY: all clean
