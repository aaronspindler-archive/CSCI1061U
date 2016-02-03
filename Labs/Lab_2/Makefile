prog: lab2.cpp arrlib
	g++ lab2.cpp arrlib.a -o lab2

min: minarr.cpp minarr.h
	g++ -c minarr.cpp

stat: statarr.cpp statarr.h
	g++ -c statarr.cpp

arrlib: minarr.cpp minarr.h maxarr.cpp maxarr.h statarr.cpp statarr.h prnarr.cpp prnarr.h multarr.cpp multarr.h revarr.cpp revarr.h
	g++ -c minarr.cpp
	g++ -c maxarr.cpp
	g++ -c statarr.cpp
	g++ -c prnarr.cpp
	g++ -c multarr.cpp
	g++ -c revarr.cpp
	ar cr arrlib.a minarr.o maxarr.o statarr.o prnarr.o multarr.o revarr.o

all:
	make arrlib
	make prog

clean:
	find . -type f -name '*.o' -delete
	find . -type f -name '*.a' -delete

run:
	./lab2

install:
	mkdir -p bin
	cp lab2 bin
