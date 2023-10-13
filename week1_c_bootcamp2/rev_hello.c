#include <stdio.h>

int main() {

    char str[] = "Hello";
    int length = 0;

// Manually determine the length of the string
    while (str[length] != '\0') {
    length++;
    }

// Print the string in reverse, including the null-terminating character
    for (int a = length; a>=0; a--) {
        if (str[a] == '\0') {
            printf ("\\0 ");
        } else {
            printf ("%c", str[a]);
        }
    } 

    printf ("\n");
    return 0;

}