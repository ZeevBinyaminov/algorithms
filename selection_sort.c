#include <stdio.h>

void output(int* arr, int arr_size);
void swap(int* p1, int* p2);
void selection_sort(int* arr, int arr_size);

int main() {
    int arr[] = {55, 52, 33, 22, 10, 5};
    int arr_size = 6;
    selection_sort(arr, arr_size);
    output(arr, arr_size);
    return 0;
}

void output(int* arr, int arr_size) {
    for (int i = 0; i < arr_size; i ++) {
        printf("%d ", arr[i]);
    }
}


void swap(int* p1, int* p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}


void selection_sort(int* arr, int arr_size) {
    int i, j, min_ind;
    for (i = 0; i < arr_size; i++) {
        min_ind = i;
        for (j = i + 1; j < arr_size; j++) {
            if (arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        swap(&arr[i], &arr[min_ind]);
    }
}
