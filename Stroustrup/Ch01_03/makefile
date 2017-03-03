all: test types input detect detect2 unsafe_conversion

test:
	g++ -Wall test.cpp -o test

types:
	g++ -Wall -o types types.cpp -std=c++14

input:
	rm -f input
	g++ -Wall -o input input.cpp -std=c++14

detect:
	rm -f detect
	g++ -Wall -o detect detect.cpp -std=c++14

detect2:
	rm -f detect2
	g++ -Wall -o detect2 detect2.cpp -std=c++14

unsafe_conversion:
	rm -f unsafe_conversion
	g++ -Wall -o unsafe_conversion unsafe_conversion.cpp -std=c++14

universal_init:
	g++ -Wall -o universal_init universal_init.cpp -std=c++14

clean:
	rm -f a.out test types input detect detect2
