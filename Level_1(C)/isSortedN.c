// Считать с клавиатуры положительную длину числовой последовательности и саму последовательность. Проверить, упорядочена ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в противном случае вывести «no».
// Пример ввода

// 5
// -20 -15 0 12 15

// Пример вывода

// yes

#include <stdio.h>

int main() {
    int lenght, firstNumber, xNumber;
    int isSorted = 1;
    
    scanf("%d %d", &lenght, &firstNumber);
    for ( int i = 1; i < lenght; i++ ) {
        scanf("%d", &xNumber);
        if ( xNumber >= firstNumber ) {
            firstNumber = xNumber;
            isSorted += 1;
        }
    }
    if ( isSorted == lenght ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
