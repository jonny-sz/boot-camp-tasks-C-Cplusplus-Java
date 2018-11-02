// Вывести числовой квадрат заданного размера.
// Выведенные числа начинаются с единицы и постоянно увеличиваются.
// В каждой строке числа разделены пробелами.
// Порядок строк обратный.
// Размер считать с клавиатуры.
// Пример ввода

// 2

// Пример вывода

// 3 4
// 1 2

#include <stdio.h>

int main() {
    int size;
    int end;
    int start;
    
    scanf("%d", &size);
    end = size * size;
    start = end - (size - 1);
    
    for ( int line = 0; line < size; line++ ) {
        for ( int i = start; i < end; i++ ) {
            printf("%d ", i);
        }
        printf("%d\n", end);
        end -= size;
        start -= size;
    }
    
    return 0;
}
