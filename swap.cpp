void swap(int *xp, int *yp) ;

void swap(int *xp, int *yp){
    int tmp = *xp;
    *xp = *yp;
    *yp= tmp;
}
