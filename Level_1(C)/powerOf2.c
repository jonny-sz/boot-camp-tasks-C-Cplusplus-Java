// Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.
// Пример ввода

// 3

// Пример вывода

// 1 2 4 8

#include <stdio.h>

int main() {
    int maxPower;
    int power = 1;
    
    scanf("%d", &maxPower);
    
    printf("1");
    
    for ( int i = 1; i <= maxPower; i++ ) {
        power *= 2;
        printf(" %d", power);
    }
    printf("\n");
    
    return 0;
}
