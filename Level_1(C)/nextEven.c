// Считать целое число. Вывести на экран минимальное четное число, не меньшее введенного.
// Пример ввода

// 17

// Пример вывода

// 18

#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("%d\n", a);
    } else {
        printf("%d\n", a+1);
    }
    
    return 0;
}