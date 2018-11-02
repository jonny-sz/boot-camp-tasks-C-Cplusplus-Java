// void strUpperCase(char str[])

#include <stdio.h>

void strUpperCase(char str[]) {
    for ( int i = 0; str[i] != '\0'; i++ ) {
        if ( str[i] > 96 ) {
            str[i] -= 32;
        }
    }
}

// void strUpperCase(char str[]) {
//     for ( ; *str != '\0'; str++ ) {
//         if ( *str > 96 && *str < 123 ) {
//             *str -= 32;
//         }
//     }
// }



int main() {
    char str[] = "hello123helloAAAhello}";
    
    strUpperCase(str);
    
    printf("%s\n", str);
    
    return 0;
}