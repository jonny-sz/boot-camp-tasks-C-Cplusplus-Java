// Вычислить и вывести факториал считанного с клавиатуры целого числа.
// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.
// Пример ввода

// 5

// Пример вывода

// 120

#include <stdio.h>

int main() {
    int number;
    int factorial = 1;
    
    scanf("%d", &number);
    
    for ( int i = 2; i <= number; i++ ) {
        factorial *= i;
    }
    if ( number < 0 ) {
        printf("-1\n");
    } else {
        printf("%d\n", factorial);
    }
    
    return 0;
}
