main: main.o fuse.o puzzle.o
	g++ --std=c++11 -o main  main.o fuse.o puzzle.o
	./main
main.o: main.cpp
	g++ -c main.cpp
fuse.o: fuse.cpp
	g++ -c fuse.cpp
puzzle.o: puzzle.cpp
	g++ -c puzzle.cpp

clean: 
	-rm -f *.o main