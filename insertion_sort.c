#include <stdio.h>

void output(int *arr, int arr_size);

void swap(int *p1, int *p2);

void insertion_sort(int *arr, int arr_size);


int main() {
    int arr[] = {66, 33, 55, 22, 124, 33};
//    output(arr, 6);
//    printf("\n");
    insertion_sort(arr, 6);
    output(arr, 6);

    return 0;
}


void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void output(int *arr, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int *arr, int arr_size) {
    int i, j;
    for (i = 1; i < arr_size; i++) {
        j = i;
        while ((j > 0) && (arr[j] < arr[j - 1])) {
            swap(&arr[j], &arr[j - 1]);
            j -= 1;
        }
//        output(arr, arr_size);
//        printf("\n");
    }
}