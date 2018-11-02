// Считать с клавиатуры два целых положительных числа - количество одноклеточных организмов в чашке Петри и количество часов - время проведения эксперимента. Каждый час, каждая клетка делится на 2 клетки. Вывести на экран количество клеток в чашке петри на каждый час эксперимента.
// Пример ввода

// 5 2

// Пример вывода

// 1h => 10 amoeba(s)
// 2h => 20 amoeba(s)

#include <stdio.h>

int main() {
    int quantity, period;
    int hours = 0;
    
    scanf("%d %d", &quantity, &period);
    for ( int i = 0; i < period; i++ ) {
        hours += 1;
        quantity = quantity * 2;
        printf("%dh => %d amoeba(s)\n", hours, quantity);
    }
    return 0;
}
