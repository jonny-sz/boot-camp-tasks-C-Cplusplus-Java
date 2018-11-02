// int partition(int array[], int start, int end)

// В качестве опорного элемента брать среднее арифметическое между start и end с округлением вниз.

int partition(int array[], int start, int end) {
    int mid = (end + start) / 2;
    int pivot = array[mid];
    int tail = start;
    
    array[mid] = array[end];
    array[end] = pivot;
    
    for ( ; array[tail] < array[end]; tail++ );
    for ( int i = tail + 1; i < end; i++ ) {
        if ( array[i] < array[end] ) {
            pivot = array[tail];
            array[tail] = array[i];
            array[i] = pivot;
            tail += 1;
        }
    }
    pivot = array[tail];
    array[tail] = array[end];
    array[end] = pivot;
    
    return tail;
}
