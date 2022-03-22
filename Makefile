all: main sort selectionSort bubbleSort
	g++ build/* -o run/app

build:
	mkdir build

run:
	mkdir run

selectionSort:
	g++ -o build/selectionSort.o -c Algorithms/Sorting/SelectionSort/selectionSort.cpp -I Algorithms/Sorting/

bubbleSort:
	g++ -o build/bubbleSort.o -c Algorithms/Sorting/BubbleSort/bubbleSort.cpp -I Algorithms/Sorting/

sort:
	g++ -o build/sort.o -c Algorithms/Sorting/sort.cpp -I Algorithms/Sorting/ -I Algorithms/Sorting/SelectionSort/ -I Algorithms/Sorting/BubbleSort/

main: build
	g++ -o build/main.o -c test/main.cpp -I Algorithms/Sorting/

clean: build run
	rm build/* run/*