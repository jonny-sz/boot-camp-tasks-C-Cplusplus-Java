// Считать с клавиатуры целые числа min, max и положительный делитель. Вывести в столбик числа, кратные делителю, от min до max включительно.
// Пример ввода

// 0 8 2

// Пример вывода

// 0
// 2
// 4
// 6
// 8

#include <stdio.h>

int main() {
    int min, max;
    int divisor;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    if ( min > 0 && min % divisor != 0 ) {
        min += divisor;
    }
    min -= min % divisor;
    
    for ( int i = min; i <= max; i += divisor ) {
        printf("%d\n", i);
    }
    
    return 0;
}
