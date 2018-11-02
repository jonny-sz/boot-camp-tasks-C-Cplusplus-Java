// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм quickSort.
// Результат записать в task.out

#include <stdio.h>

int len(FILE *in) {
    int len;
    
    fscanf(in, "%d", &len);
    
    return len;
}

void arrayRead(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int partition(int array[], int start, int end) {
    int mid = (start + end) / 2;
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

void quickSort(int array[], int start, int end) {
    int pivot;
    
    if ( start < end ) {
        pivot = partition(array, start, end);
        
        quickSort(array, start, pivot-1);
        quickSort(array, pivot+1, end);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = len(in);
    int array[size];
    
    arrayRead(in, array, size);
    
    quickSort(array, 0, size-1);
    
    arrayPrint(out, array, size);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
