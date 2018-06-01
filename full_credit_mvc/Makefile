# Makefile for Library Management System
CXXFLAGS += --std=c++11

all: div main
rebuild: div clean main

debug: CXXFLAGS += -g
debug: rebuild

main: main.o controller.o view.o library.o publication.o 
	$(CXX) $(CXXFLAGS) -o lms main.o controller.o view.o library.o publication.o 
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp
controller.o: controller.cpp *.h
	$(CXX) $(CXXFLAGS) -c controller.cpp
test_view: test_view.o controller.o view.o library.o publication.o 
	$(CXX) $(CXXFLAGS) -o test_view test_view.o controller.o view.o library.o publication.o 
test_view.o: test_view.cpp view.h publication.h library.h
	$(CXX) $(CXXFLAGS) -c test_view.cpp
test_library: test_library.o library.o publication.o
	$(CXX) $(CXXFLAGS) -o test_library test_library.cpp library.o publication.o
test_library.o: test_library.cpp *.h
	$(CXX) $(CXXFLAGS) -c test_library.cpp
library.o: library.cpp *.h
	$(CXX) $(CXXFLAGS) -c library.cpp
test_publication: test_publication.o publication.o 
	$(CXX) $(CXXFLAGS) -o test_publication test_publication.o publication.o 
test_publication.o: test_publication.cpp *.h
	$(CXX) $(CXXFLAGS) -c test_publication.cpp
publication.o: publication.cpp *.h
	$(CXX) $(CXXFLAGS) -c publication.cpp
clean:
	-rm -f *.o lms test_age test_genre test_media test_publication test_library test_view test_view_actual.txt
div:
	@echo
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo 'X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-'
	@echo '-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X'
	@echo
