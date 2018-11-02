// Написать функцию:
// arrayShiftLeft(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент влево.
// Использование дополнительного массива не разрешается.

void arrayShiftLeft(int array[], int size) {
    int value = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = value;
}
