// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.
// Пример ввода

// 0 15

// Пример вывода

// 0
// 5
// 10
// 15

#include <stdio.h>

#define MULTIPLE 5

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min > 0 && min % MULTIPLE != 0 ) {
        min += MULTIPLE;
    }
    min -= min % MULTIPLE;
    
    for ( int i = min; i <= max; i += MULTIPLE ) {
        printf("%d\n", i);
    }
    
    return 0;
}
