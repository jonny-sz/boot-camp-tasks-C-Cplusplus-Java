// void selectSort(int array[], int size)

#include <stdio.h>

void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }
        if ( min != i ) {
            int tmp = array[i];
            
            array[i] = array[min];
            array[min] = tmp;
        }
    }
}

int main() {
    int array[9] = {0, 6, 1, 5, 3, 10, 2, 11, 0};
    
    selectSort(array, 9);
    
    for ( int i = 0; i < 8; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[8]);
    
    return 0;
}
