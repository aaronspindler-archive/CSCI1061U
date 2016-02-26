all:
	make build
	make run
	make clean

build: main.cpp Stack.cpp Buffer.cpp StackInt.cpp
	g++ main.cpp Stack.cpp Buffer.cpp StackInt.cpp -o lab4

clean:
	find . -type f -name '*.o' -delete
	find . -type f -name '*.a' -delete

run:
	./lab4
