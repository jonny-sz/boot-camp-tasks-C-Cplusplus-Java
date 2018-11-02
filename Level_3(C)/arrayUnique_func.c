// Написать функцию:
// int arrayUnique(int array[], int size)
// Удалить из массива дубликаты элементов. Вернуть новую длину массива.

// Примечание: пример ввода и вывода показан для лучшего понимания условия задачи. Выводить результат на печать не нужно.
// Пример ввода

// 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 5 4 3 2 1

// Пример вывода

// array = 1 2 3 4 5 6 7 8 9 10
// len = 10

#include <stdio.h>

int arrayUnique(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; ) {
            if ( array[i] == array[j] ) {
                for ( int k = j + 1; k < size; k++ ) {
                    array[k-1] = array[k];
                }
                size -= 1;
            } else {
                j += 1;
            }
        }
    }
    return size;
}

int main() {
    int size = 25;
    int array[25] = { 1, 1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1 };
    int len = arrayUnique(array, size);
    int last = len - 1;
    
    printf("%d\n", len);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
