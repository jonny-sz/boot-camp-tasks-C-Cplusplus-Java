// Вывести в консоль числовую пирамидку на total строк.
// В каждой строке числа идут от единицы до номера строки через пробел.
// Пропустить rows строк и cols столбцов.
// В выводе не должно быть пустых строк до и после чисел.
// Целые положительные числа total, rows и cols считать с клавиатуры.
// Пример ввода

// 5 3 2

// Пример вывода

// 3 4
// 3 4 5

#include <stdio.h>

int main() {
    int size;
    int lines, cols;
    
    scanf("%d %d %d", &size, &lines, &cols);
    
    if ( lines < cols ) {
        lines = cols;
    }
    
    for ( int line = lines + 1; line <= size; line++ ) {
        for ( int col = cols + 1; col < line; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", line);
    }
    
    return 0;
}
