// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.
// Пример ввода

// hello

// Пример вывода

// 5

#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT+1];
    
    fscanf(in, "%100s", str);
    
    fprintf(out, "%d\n", strLen(str));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
