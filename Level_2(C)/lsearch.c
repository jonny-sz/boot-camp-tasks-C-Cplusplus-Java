// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.
// Пример ввода

// 40
// 10 20 30 40 50 60 70 80 90 100

// Пример вывода

// 3

#include <stdio.h>

#define LIMIT 100

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int arrayScan(FILE *in, int array[], int limit) {
    int size = 0;
    
    for ( ; size < limit && fscanf(in, "%d", &array[size]) == 1; size++ );
    return size;
}

int arraySearch(FILE *in, int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int needle = intScan(in);
    int array[LIMIT];
    int size = arrayScan(in, array, LIMIT);
    
    fprintf(out, "%d\n", arraySearch(in, array, size, needle));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
