// Считать с клавиатуры целое основание и целый неотрицательный показатель. Вывести через пробел степени числа основания от нулевой до заданной.
// Пример ввода

// 2 3

// Пример вывода

// 1 2 4 8

#include <stdio.h>

int main() {
    int base, limit;
    int result = 1;
    
    scanf("%d %d", &base, &limit);
    
    printf("1");
    for ( int i = 1; i <= limit; i++ ) {
        result *= base;
        printf(" %d", result);
    }
    printf("\n");
    
    return 0;
}
