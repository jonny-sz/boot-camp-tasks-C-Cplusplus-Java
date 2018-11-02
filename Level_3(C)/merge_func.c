// void merge(int array[], int lo, int mid, int hi)
// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int tmp[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            tmp[k] = array[i];
            i += 1;
        } else {
            tmp[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        tmp[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        tmp[k] = array[j];
    }
    for ( i = lo, k = 0; k < size; i++, k++ ) {
        array[i] = tmp[k];
    }
}
