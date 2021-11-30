int maxinlst(int lst[], int size) {
    int maxx = -10000000000;
    for (int i = 0; i < size; i++) {
        maxx = max(maxx, lst[i]);
    }
    return maxx;
}