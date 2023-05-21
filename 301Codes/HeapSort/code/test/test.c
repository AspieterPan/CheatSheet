#include "../inc/HeapSort.h"

int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arr2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int arr3[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
int arr4[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
int arr5[10] = {42, 23, 17, 89, 56, 74, 33, 91, 5, 68};

int main() {
    int len = sizeof(arr5)/sizeof(int);
    heapSort(arr5, len);
    for(int i = 0; i < len; i++) {
        printf("%d ", arr5[i]);
    }
    printf("\n");
    return 0;
}