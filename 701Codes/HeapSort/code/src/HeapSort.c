#include "../inc/HeapSort.h"

void heapSort(int *arr, int len) {
    for(int i = len/2 - 1; i > -1; i--) {
        heapAdjust(arr, i, len);
    }
}

void heapAdjust(int *arr, int k, int len) {
    int temp = arr[k];
    for(int i = (k+1)*2 - 1; i < len; i = (i+1)*2 - 1) {
        if(i+1 < len && arr[i+1] > arr[i]) {
            i++;
        }
        if(arr[i] > temp) {
            arr[k] = arr[i];
            k = i;
        } else {
            break;
        }
        arr[k] = temp;
    }
}
