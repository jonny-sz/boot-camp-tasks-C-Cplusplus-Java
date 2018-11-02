// Написать функцию:
// void sliceReverse(int array[], int lo, int hi)
// Осуществить реверс части массива от lo до hi включительно.

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int tempValue = array[lo];
        
        array[lo] = array[hi];
        array[hi] = tempValue;
    }
}
