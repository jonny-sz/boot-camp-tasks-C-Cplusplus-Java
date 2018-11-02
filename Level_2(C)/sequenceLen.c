// Считать из файла task.in последовательность чисел размером не более 100 элементов.
// Посчитать длину последовательности и вывести ее в task.out.
// Пример ввода

// 10 20 30 40 50 60 70 80 90 100

// Пример вывода

// 10

#include <stdio.h>

int main() {
    int length = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int i; fscanf(in, "%d", &i) == 1 && length < 100; length++ );
    fclose(in);
    
    fprintf(out, "%d\n", length);
    fclose(out);
    
    return 0;
}
