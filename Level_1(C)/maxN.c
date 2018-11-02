// Считать с клавиатуры целое положительное число - количество чисел в последовательности.
// Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.
// Пример ввода

// 5
// 1 2 3 4 5

// Пример вывода

// 5

#include <stdio.h>

int main() {
    int quantity;
    int result;
    int number;
    
    scanf("%d %d", &quantity, &result);
    
    for ( int i = 1; i < quantity; i++ ) {
        scanf("%d", &number);
        
        if ( number > result ) {
            result = number;
        }
    }
    printf("%d\n", result);
    
    return 0;
}
