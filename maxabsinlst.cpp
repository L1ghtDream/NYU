int maxabsinlst(int lst[], int size) {
    int maxx = -1000000000;
    for (int i = 0; i < size; i++) {
        int cmp = lst[i];
        if (cmp < 0) {
            cmp *= -1;
        }
        if (maxx < cmp) {
            maxx = cmp;
        }
    }
    return maxx;
}