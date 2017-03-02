all: test types input detect

test:
	g++ -Wall test.cpp -o test

types:
	g++ -o types types.cpp -std=c++14

input:
	rm -f input
	g++ -o input input.cpp -std=c++14

detect:
	rm -f detect
	g++ -o detect detect.cpp -std=c++14

clean:
	rm -f a.out test types input
