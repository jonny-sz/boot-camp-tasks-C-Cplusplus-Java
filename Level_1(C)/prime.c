// Вывести N-ное по счёту простое число (см. Википедию).
// N считать с клавиатуры.
// Оптимизировать работу программы, насколько это возможно.
// В случае неопределенности ответа вывести -1.
// Пример ввода

// 3

// Пример вывода

// 5

#include <stdio.h>

int isPrime(int n) {
    if ( n < 2 ) {
        return 0;
    }
    
    for ( int i = 2; i * i <= n; i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int position;
    int prime;
    
    scanf("%d", &position);
    
    if ( position < 1 ) {
        printf("-1\n");
        return 0;
    }
    
    for ( int i = 2, counter = 0; counter < position; i++ ) {
        if ( isPrime(i) == 1 ) {
            prime = i;
            counter += 1;
        }
    }
    
    printf("%d\n", prime);
    
    return 0;
}
