// void insertSort(int array[], int len)

#include <stdio.h>

void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int tmp = array[i];
        
        for ( int prev = j - 1; j > 0 && tmp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = tmp;
    }
}

int main() {
    int array[9] = {0, 6, 1, 5, 3, 10, 2, 11, 0};
    
    insertSort(array, 9);
    
    for ( int i = 0; i < 8; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[8]);
    
    return 0;
}
