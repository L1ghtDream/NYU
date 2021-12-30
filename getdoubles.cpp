double *getDoubles(int numDoubles);

double *getDoubles(int numDoubles) {
    double *list = new double[numDoubles];

    for (int i = 1; i <= numDoubles; i++) {
        list[i-1] = (i * 1.0) / 3;
    }
    return list;
}