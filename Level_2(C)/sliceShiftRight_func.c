// Написать функцию:
// void sliceShiftRight(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int exchange = array[end];
        
        for ( ; end > start; end-- ) {
            array[end] = array[end-1];
        }
        array[start] = exchange;
    }
}
