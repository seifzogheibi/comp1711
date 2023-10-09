#include <stdio.h>
int main() {
    int a;
    int b;
    int c;

    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    
    c = a + b;

    printf("Sum is: %d\n", c);
    return 0;
}