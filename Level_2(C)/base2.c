// Считать с клавиатуры целое число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 36).
// Вывести в консоль число, записанное в новой системе счисления.
// В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
// Для решения можно пользоваться только циклами. Задача решается без массивов. Использовать только тип int.
// Пример ввода

// -255 16

// Пример вывода

// -FF

#include <stdio.h>

int main() {
    int current, base;
    int level = 1;
    
    scanf("%d %d", &current, &base);
    
    if ( current < 0 ) {
        printf("-");
        current *= -1;
    }
    
    for ( ; current / level >= base; level *= base );
    for ( ; level >= 1; level /= base ) {
        int digit = current / level;
        
        if ( digit > 9 ) {
            printf("%c", 55+digit);
        } else {
            printf("%d", digit);
        }
        current %= level;
    }
    printf("\n");
    
    return 0;
}
