// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13

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

// int main() {
//     char str[] = "asdfghjkl";
    
//     strRot13(str);
    
//     printf("%s\n", str);
    
//     return 0;
// }
