objects = main.o sorting.o

all: $(objects)
	cc -g -o test $(objects)
main.o: sorting.h
sorting.o: sorting.h

.PHONY: clean
clean:
	-rm -f test $(objects)

