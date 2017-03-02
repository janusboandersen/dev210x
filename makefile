all: main

main:
	g++ -Wall test.cpp -o test

clean:
	rm -f a.out test
