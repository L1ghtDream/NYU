float avgoflst(int lst[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += lst[i];
    }
    return (sum * 1.0f) / (size * 1.0f);
}