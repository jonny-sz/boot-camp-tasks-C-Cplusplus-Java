// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.
// Пример ввода

// hello

// Пример вывода

// olleh

#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

void strReverse(char str[], int len) {
    for ( int i = 0, j = len - 1; i < j; i++, j-- ) {
        int exchange = str[i];
        
        str[i] = str[j];
        str[j] = exchange;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LIMIT+1];
    
    fscanf(in, "%100s", str);
    strReverse(str, strLen(str));
    
    fprintf(out, "%s\n", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
