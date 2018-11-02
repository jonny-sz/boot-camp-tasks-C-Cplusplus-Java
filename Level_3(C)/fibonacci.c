// Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
// Пример ввода

// 8

// Пример вывода

// 21

#include <stdio.h>

int fibonacci(int position) {
    int fibo = 0;
    int first = 0;
    int second = 1;
    
    if ( position == 1 || position == -1 ) {
        return 1;
    }
    if ( position > 0 ) {
        for ( int i = 2; i <= position; i++ ) {
            fibo = first + second;
            first = second;
            second = fibo;
        }
    } else {
        for ( int i = -2; i >= position; i-- ) {
            fibo = first - second;
            first = second;
            second = fibo;
        }
    }
    
    return fibo;
}

int main() {
    int position;
    
    scanf("%d", &position);
    
    printf("%d\n", fibonacci(position));
    
    return 0;
}
