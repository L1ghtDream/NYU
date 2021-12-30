void merge_sort(int arr[], int left, int right);

void merge(int arr[], int left, int middle, int right);

void merge_sort(int arr[], int left, int right) {
    int l = left;
    int r = right;

    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}