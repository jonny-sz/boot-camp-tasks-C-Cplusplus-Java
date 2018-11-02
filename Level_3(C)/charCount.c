// В файле task.in задана последовательность символов.
// Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
// Большие буквы считать как маленькие.
// Пример ввода

// Hello!

// Пример вывода

// e 1
// h 1
// l 2
// o 1

#include <stdio.h>

#define LEN 26

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

void arrayRead(FILE *in, int array[], int size) {
    char sym;
    int index;
    int diff = 'a' - 'A';
    
    for ( ; fscanf(in, "%c", &sym) != EOF; ) {
        if ( sym >= 'A' && sym <= 'Z' ) {
            sym += diff;
        }
        if ( sym >= 'a' && sym <= 'z' ) {
            index = sym - 'a';
            array[index] += 1;
        }
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] > 0 ) {
            fprintf(out, "%c %d\n", i+'a', array[i]);
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[LEN];
    
    arrayZeroFill(array, LEN);
    arrayRead(in, array, LEN);
    arrayPrint(out, array, LEN);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
