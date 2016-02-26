all:
	make build
	make run
	make clean

build: main.cpp
	g++ main.cpp -o wc

clean:
	find . -type f -name '*.o' -delete
	find . -type f -name '*.a' -delete

run:
	./wc hello-world.txt
	wc hello-world.txt
	./wc test1.txt
	wc test1.txt
	./wc test2.txt
	wc test2.txt
