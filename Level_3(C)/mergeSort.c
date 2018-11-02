// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм mergeSort.
// Результат записать в task.out
// Допустимо использование рекурсии.

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

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int tmp[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            tmp[k] = array[i];
            i += 1;
        } else {
            tmp[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        tmp[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        tmp[k] = array[j];
    }
    for ( i = lo, k = 0; k < size; i++, k++ ) {
        array[i] = tmp[k];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (hi + lo) / 2;
    
    if ( mid > lo ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = len(in);
    int array[size];
    
    arrayRead(in, array, size);
    
    mergeSort(array, 0, size);
    
    arrayPrint(out, array, size);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
