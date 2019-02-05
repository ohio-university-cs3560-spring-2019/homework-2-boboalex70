CFLAGS = -Wall -std=c++11

main: flips.o main.o
	g++ $(CFLAGS) flips.o main.o -o main

flips.o: flips.cc flips.h
	g++ -c $(CFLAGS) flips.cc

main.o: main.cc flips.h
	g++ -c $(CFLAGS) main.cc

clean:
	rm *.o $(objects) main
