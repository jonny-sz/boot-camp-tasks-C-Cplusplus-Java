// Считать из файла task.in в память строку длиной не более 100 символов.
// Зашифровать её по алгоритму ROT13.
// Результат вывести в task.out.

#include <stdio.h>

void strRot13(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str >= 'a' && *str <= 'z' ) {
            if ( *str < 'n' ) {
                *str += 13;
            } else {
                *str -= 13;
            }
        } else if ( *str >= 'A' && *str <= 'Z' ) {
            if ( *str < 'N' ) {
                *str += 13;
            } else {
                *str -= 13;
            }
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int length = 100;
    char str[length+1];
    
    fscanf(in, "%100s", str);
    strRot13(str);
    fprintf(out, "%s\n", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
