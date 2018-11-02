// Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. Вывести в строку через пробел члены заданной прогрессии.
// Задаваемое количество больше нуля.
// Пример ввода

// 12 2 4

// Пример вывода

// 12 14 16 18

#include <stdio.h>

int main() {
    int member, increment;
    int limit;
    
    scanf("%d %d %d", &member, &increment, &limit);
    for ( int i = 1; i < limit; i++ ) {
        printf("%d ", member);
        member += increment;
    }
    printf("%d\n", member);
    
    return 0;
}
