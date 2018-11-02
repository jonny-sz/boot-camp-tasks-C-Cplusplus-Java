// Считать min, max. Вывести в столбик чётные числа от min до max включительно.
// Пример ввода

// 0 8

// Пример вывода

// 0
// 2
// 4
// 6
// 8

#include <stdio.h>

#define NEXT 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % NEXT != 0 ) {
        min += 1;
    }
    
    for ( int i = min; i <= max; i += NEXT ) {
        printf("%d\n", i);
    }
    
    return 0;
}
