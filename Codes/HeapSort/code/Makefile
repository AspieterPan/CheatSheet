test: ./a.out
	./a.out

./a.out: ./src/HeapSort.c ./test/test.c 
	gcc $^ -o a.out -g
	
heap.o: ./src/HeapSort.c ./inc/HeapSort.h
	gcc -c ./src/HeapSort.c ./inc/HeapSort.h -o heap.o

test.o: ./test/test.c 
	gcc -c ./src/test.c -o test.o