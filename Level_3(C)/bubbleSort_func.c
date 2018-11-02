// void bubbleSort(int array[], int size)

#include <stdio.h>

void bubbleSort(int array[], int size) {
    int last = size - 1;
    int isSorted = 0;
    
    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;
        
        isSorted = 1;
        
        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;
            
            if ( array[j] > array[next] ) {
                int tmp = array[j];
                
                array[j] = array[next];
                array[next] = tmp;
                isSorted = 0;
            }
        }
    }
}

int main() {
    int array[9] = {11, 6, 1, 5, 3, 10, 2, 0, 0};
    
    bubbleSort(array, 9);
    
    for ( int i = 0; i < 8; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[8]);
    
    return 0;
}
