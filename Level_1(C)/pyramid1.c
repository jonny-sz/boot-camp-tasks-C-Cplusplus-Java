// Вывести числовую пирамидку на total строк.
// В каждой строке числа идут от единицы до номера строки через пробел.
// Пример ввода

// 3

// Пример вывода

// 1
// 1 2
// 1 2 3

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int line = 1; line <= size; line++ ) {
        for ( int column = 1; column < line; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", line);
    }
    
    return 0;
}
