
def heapSort(arr: list):

    def adjust(k: int):
        j = (k+1)*2 - 1
        while j < len(arr):
            if j+1 < len(arr) and arr[j+1] > arr[j]:
                j += 1
            if arr[k] > arr[j]:
                break
            arr[k], arr[j] = arr[j], arr[k]
            k = j
            j = (k+1)*2 - 1
            pass

    for i in range(int(len(arr)/2) - 1, -1, -1):
        adjust(i)


if __name__ == "__main__":
    array = [1, 4, 6, 7, 2, 34, 56, 12, 53, 75, ]
    heapSort(array)
    print(array)
