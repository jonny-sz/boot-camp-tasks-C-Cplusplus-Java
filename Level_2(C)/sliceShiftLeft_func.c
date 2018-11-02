// Написать функцию:
// void sliceShiftLeft(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.

void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int exchange = array[start];
        
        for ( ; start < end; start++ ) {
            array[start] = array[start+1];
        }
        array[end] = exchange;
    }
}
