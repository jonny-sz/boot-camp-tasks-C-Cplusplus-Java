// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out
// Пример ввода

// abcd

// Пример вывода

// ABCD

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char sym; fscanf(in, "%c", &sym) != EOF; ) {
        if ( sym > 96 && sym < 123 ) {
            sym -= 32;
        }
        fprintf(out, "%c", sym);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}
