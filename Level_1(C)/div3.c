// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.
// Пример ввода

// 0 9

// Пример вывода

// 0
// 3
// 6
// 9

#include <stdio.h>

#define MULTIPLE 3

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min > 0 && min % MULTIPLE != 0 ) {
        min += MULTIPLE;
    }
    min = min - min % MULTIPLE;
    
    for ( int i = min; i <= max; i += MULTIPLE ) {
        printf("%d\n", i);
    }
    
    return 0;
}
