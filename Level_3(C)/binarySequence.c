// Условие задачи:
// В файле task.in дана последовательность символов – нулей и единиц.
// Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания последовательности по неубыванию.
// Пример ввода:
// 1101
// Пример вывода:
// 1
// Пояснение:
// Необходимо обменять ноль с первой единицей.

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int exchanges = 0;
    int zeros = 0;
    int len = 0;
    int tmp;
    
    for ( ; fscanf(in, "%1d", &tmp) == 1; len++ ) {
        if ( tmp == 0 ) {
            zeros += 1;
        }
    }
    
    if ( zeros < len && zeros != 0 ) {
        rewind(in);
        for ( int i = 0; i < zeros; i++ ) {
            fscanf(in, "%1d", &tmp);
            if ( tmp == 1 ) {
                exchanges += 1;
            }
        }
    }
    
    fprintf(out, "%d\n", exchanges);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
