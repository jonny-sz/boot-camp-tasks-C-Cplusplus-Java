// Считать с клавиатуры целые числа min и max. Вывести в строку кубы всех нечетных чисел в промежутке от min до max включительно. В указаном промежутке гарантированно существует минимум одно нечетное число.
// Пример ввода

// 0 7

// Пример вывода

// 1 27 125 343

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    for ( int i = min; i < max; i += 2 ) {
        min = i * i * i;
        printf("%d ", min);
    }
    max = max * max * max;
    printf("%d\n", max);
    return 0;
}
