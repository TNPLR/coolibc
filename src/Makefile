CC=gcc
CFLAGS=-std=c90 -pedantic -Wall -Wextra -O3 -fPIC -ggdb

AR=ar

.PHONY: clean all test test_vector
all: libcoo.so
libcoo.so: libcoo.so.1
	ln -sf $< $@
libcoo.so.1: libcoo.so.1.0.0
	ln -sf $< $@
libcoo.so.1.0.0: vector.o
	${CC} ${CFLAGS} -shared -Wl,-soname,libcoo.so.1 -o $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ $^

test: test_vector
test_vector: vector_test.c libcoo.so
	${CC} ${CFLAGS} -o $@ $^
clean:
	rm -f *.o *.so* test_vector
