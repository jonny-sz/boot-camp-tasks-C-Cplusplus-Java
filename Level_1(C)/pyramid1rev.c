// Вывести числовую пирамидку на total строк. Порядок строк – обратный.
// В каждой строке числа идут от единицы до номера строки через пробел.
// Пример ввода

// 3

// Пример вывода

// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int line = size; line > 0; line-- ) {
        for ( int column = 1; column < line; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", line);
    }
    
    return 0;
}
