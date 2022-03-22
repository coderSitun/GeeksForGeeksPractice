build:
	mkdir build

main: build
	g++ -o build/main.o -c test/main.cpp -I Algorithms/Sorting/