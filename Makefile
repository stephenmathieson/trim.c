
CC     ?= cc
SRC     = $(wildcard src/*.c)
TESTS   = $(wildcard test/*.c)
CFLAGS  = -std=c99 -Wall -Isrc -Ideps

test: $(TESTS)

$(TESTS):
	@$(CC) $(CFLAGS) $@ $(SRC) -o $(basename $@)
	@./$(basename $@)

clean:
	$(foreach t, $(TESTS), rm -f $(basename $(t));)

.PHONY: test $(TESTS) clean
