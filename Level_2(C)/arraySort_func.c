// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.

void arraySort(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        for ( int j = 0; j < last; j++ ) {
            if ( array[j] > array[j+1] ) {
                int exchange = array[j];
                
                array[j] = array[j+1];
                array[j+1] = exchange;
            }
        }
    }
}
