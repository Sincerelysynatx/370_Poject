part: main.o part.o
	g++ -Wall -pedantic -g -o part main.o part.o

part.o: part.cpp part.h
	g++ -Wall -pedantic -g -std=c++11 -c part.cpp

main.o: main.cpp part.h
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

clean:
	rm -f part part.exe part.o main.o