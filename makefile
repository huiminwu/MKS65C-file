all: main.o test_open.o
	gcc -o Opener main.o test_open.o

main.o: main.c test_open.h
	gcc -c main.c

test_open.o: test_open.c
	gcc -c test_open.c

run:
	./Opener

clean:
	rm *.o
