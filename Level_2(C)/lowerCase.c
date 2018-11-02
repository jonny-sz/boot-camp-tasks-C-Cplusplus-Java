// В файле task.in дана последовательность символов.
// Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out
// Пример ввода

// ABCD

// Пример вывода

// abcd

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char sym; fscanf(in, "%c", &sym) != EOF; ) {
        if ( sym > 64 && sym < 91 ) {
            sym += 32;
        }
        fprintf(out, "%c", sym);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}
