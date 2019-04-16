mergesort: main.cpp mergesort.cpp merge.cpp
	g++ -o mergesort main.cpp mergesort.cpp merge.cpp -g -fsanitize=address
