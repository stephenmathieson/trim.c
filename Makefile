
test: test.c src/trim.c
	$(CC) -std=c99 $^ -o $@
	./test

.PHONY: test
