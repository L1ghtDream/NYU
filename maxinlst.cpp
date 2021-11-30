int maxinlst(int lst[], int size) {
    int maxx = -1000000000;
    for (int i = 0; i < size; i++) {
        if(maxx<lst[i]){
            maxx=lst[i];
        }
    }
    return maxx;
}