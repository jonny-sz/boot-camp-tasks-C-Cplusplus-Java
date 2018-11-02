// Вывести числовую пирамидку на total строк.
// В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.
// Пример ввода

// 3

// Пример вывода

// 1
// 2 3
// 4 5 6

#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    
    scanf("%d", &size);
    
    for ( int line = 1; line <= size; line++, counter++ ) {
        for ( int column = 1; column < line; column++, counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
    
    return 0;
}
