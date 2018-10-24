all: main.o
	gcc -o Opener main.o

main.o: main.c
	gcc -c main.c

run:
	./Opener

clean:
	rm *.o
