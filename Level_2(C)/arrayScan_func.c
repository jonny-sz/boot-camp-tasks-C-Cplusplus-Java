// int arrayScan(FILE *in, int array[], int limit)
// Считать из файла in не более limit элементов в массив array.
// Вернуть количество считанных элементов.

#include <stdio.h>

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;
    
    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++ );
    return quantity;
}

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int main() {
    FILE* in = fopen("task.in", "r");
    int limit = 5;
    int array[100];
    
    int length = arrayScan(in, array, limit);
    
    printf("%d\n", length );
    arrayPrint(array, limit);
    
    return 0;
}