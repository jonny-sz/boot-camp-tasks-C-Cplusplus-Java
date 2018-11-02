// Считать с клавиатуры целое положительное число.
// Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.
// Пример ввода

// 17

// Пример вывода

// 0 5 10 15

#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    max -= max % 5;
    
    for ( int i = 0; i < max; i += 5 ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}