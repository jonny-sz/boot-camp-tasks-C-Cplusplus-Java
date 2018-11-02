// Считать в массив последовательность чисел длиной 10 из файла task.in.
// Записать его через пробел в файл task.out.
// Пример ввода

// 10 20 30 40 50 60 70 80 90 100

// Пример вывода

// 10 20 30 40 50 60 70 80 90 100

#include <stdio.h>

#define LENGTH 10

void scanArray(int array[], int length, FILE *in) {
    for ( int i = 0; i < length; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void printArray(int array[], int length, FILE *out) {
    int last = length - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int array[LENGTH];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    scanArray(array, LENGTH, in);
    fclose(in);
    
    printArray(array, LENGTH, out);
    fclose(out);
    
    return 0;
}
