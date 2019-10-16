all: construct.o main.o
	gcc -o strtest myStringLib.o main.o

construct.o: construct.c headers.h
	gcc -c construct.c

main.o: main.c headers.h
	gcc -c main.c

run:
	./strtest

clean:
	rm *.o
	rm *~
