// Считать с клавиатуры положительное число — возвраст человека. Если человек достиг совершеннолетия (21 год), вывести на экран «yes», в противном случае вывести «no».
// Пример ввода

// 1

// Пример вывода

// no

#include <stdio.h>

int main() {
    int age;
    
    scanf("%d", &age);
    
    if ( age >= 21 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
