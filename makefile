mergesort: mergesort.cpp merge.cpp
	g++ -o mergesort mergesort.cpp merge.cpp -g -fsanitize=address
