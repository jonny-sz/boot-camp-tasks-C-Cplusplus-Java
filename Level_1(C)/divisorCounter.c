// Считать с клавиатуры целое положительное число, вывести на экран количество всех делителей этого числа.
// Пример ввода

// 12

// Пример вывода

// 6

#include <stdio.h>

int main() {
    int dividend;
    int divisors = 0;
    
    scanf("%d", &dividend);
    
    for ( int i = 1; i <= dividend; i++ ) {
        if ( dividend % i == 0 ) {
            divisors += 1;
        }
    }
    printf("%d\n", divisors);
    return 0;
}
