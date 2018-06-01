main: main.o library.o publication.o
	g++ --std=c++11 -o  main main.o library.o publication.o
	./main
test1: test_library.o library.o publication.o
	g++ --std=c++11 -o  test1 test_library.o library.o publication.o
	./test1
main.o: main.cpp
	g++ -c main.cpp
library.o: library.cpp
	g++ -c library.cpp
publication.o: publication.cpp
	g++ -c publication.cpp
test_library.o: test_library.cpp
	g++ -c test_library.cpp

clean: 
	-rm -f *.o main test1