// Считать с клавиатуры числовую последовательность - 5 целых чисел. Проверить, упорядочена ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в протиивном случае вывести «no». Задача решается без использования циклов.
// Пример ввода

// -20 -15 0 12 15

// Пример вывода

// yes

#include <stdio.h>

int main() {
    int input1, input2, input3, input4, input5;
    
    scanf("%d %d %d %d %d", &input1, &input2, &input3, &input4, &input5);
    
    if ( input1 < input2 && input2 < input3 && input3 < input4 && input4 < input5 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
