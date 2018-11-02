// Написать функцию:
// void arrayShift(int array[], int size, int shift)
// Реализовать циклический сдвиг массива на shift элементов вправо. Максимизировать производительность при оптимальном использовании памяти.
// Требуемая сложность: O(N)

#include <stdio.h>

void arrayShift(int array[], int size, int shift) {
    int buffer[size];
    int i = 0;
    int j = 0;
    
    shift %= size;
    
    if ( shift > 0 ) {
        for ( int len = size - shift; i < len; i++ ) {
            buffer[i] = array[i];
        }
        for ( ; j < shift; i++, j++ ) {
            array[j] = array[i];
        }
        for ( int k = 0; j < size; j++, k++ ) {
            array[j] = buffer[k];
        }
    } else {
        shift *= -1;
        
        for ( ; i < shift; i++ ) {
            buffer[i] = array[i];
        }
        for ( int len = size - shift; j < len; i++, j++ ) {
            array[j] = array[i];
        }
        for ( int k = 0; j < size; j++, k++ ) {
            array[j] = buffer[k];
        }
    }
}

int main() {
    int size = 7;
    int last = size - 1;
    int shift = -8;
    int array[7] = { 1, 2, 3, 4, 5, 6, 7 };
    
    arrayShift(array, size, shift);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}