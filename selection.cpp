#include <iostream>

using namespace std;

void selection_sort(int arr[], int elements);

void selection_sort(int arr[], int elements) {
    int newArr[elements];

    for (int i = 0; i < elements; i++) {
        int *min;
        int tmp = 1000000;
        min = &tmp;
        for (int j = 0; j < elements; j++) {
            if (*min > arr[j]) {
                min = &arr[j];
            }
        }
        newArr[i] = *min;
        *min = tmp;
    }

    for (int i = 0; i < elements; i++) {
        arr[i] = newArr[i];
    }
}