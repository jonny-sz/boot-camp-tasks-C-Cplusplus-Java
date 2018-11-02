// Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных чисел в промежутке от min до max включительно. В указанном промежутке гарантированно существует как минимум 1 парное число.
// Пример ввода

// 0 7

// Пример вывода

// 0 4 16 36

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    if ( min < 0 && max > 0 ) {
        min -= min % 2;
    }
    if ( min < 0 && max < 0 ) {
        max += max % 2;
    }
    min += min % 2;
    max -= max % 2;
    for ( int i = min; i < max; i += 2 ) {
        min = i * i;
        printf("%d ", min);
    }
    printf("%d\n", max*max);
    return 0;
}
