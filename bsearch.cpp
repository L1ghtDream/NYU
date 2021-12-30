#include <vector>
#include <algorithm>

using namespace std;

int binary_search(int search_value, int lst[], int elements);

int binarySearch(int array[], int x, int low, int high);

int binary_search(int search_value, int lst[], int elements) {
    int low = 0;
    int high = elements;
    int count = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (lst[mid] == search_value) {
            return count + 1;
        }
        if (lst[mid] < search_value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        count++;
    }

    return count;
}
