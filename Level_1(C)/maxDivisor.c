// Считать с клавиатуры целое положительное число. Вывести на экран наибольший его нетривиальный делитель. В случае неопределенности вывести 0.
// Пример ввода

// 12

// Пример вывода

// 6

#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    
    if ( input % 2 == 0 && input > 2 ) {
        printf("%d\n", input/2);
    } else if ( input % 3 == 0 && input > 2 ) {
        printf("%d\n", input/3);
    } else {
        printf("0\n");
    }
    
    return 0;
}
