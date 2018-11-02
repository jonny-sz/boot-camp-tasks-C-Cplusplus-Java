// Считать с клавиатуры целое положительное число.
// Вывести в строку все чётные числа от нуля до указанного числа включительно.
// Пример ввода

// 7

// Пример вывода

// 0 2 4 6

#include <stdio.h>

#define NEXT 2

int main() {
    int max;
    
    scanf("%d", &max);
    max -= max % NEXT;
    
    for ( int i = 0; i < max; i += NEXT ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
