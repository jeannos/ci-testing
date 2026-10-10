binaries: build/list build/flawed build/second
build/list: src/list.c
	mkdir -p build && $(CC) -Wall -Wextra -O2 -o $@ $< -larchive
build/flawed: src/flawed.c
	mkdir -p build && $(CC) -O2 -o $@ $<
build/second: src/second.c
	mkdir -p build && $(CC) -O2 -o $@ $<
.PHONY: binaries
