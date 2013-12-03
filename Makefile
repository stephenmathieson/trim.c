
test: test/test.c src/trim.c
	$(CC) -std=c99 $^ -o test-trim -Isrc
	./test-trim

.PHONY: test
