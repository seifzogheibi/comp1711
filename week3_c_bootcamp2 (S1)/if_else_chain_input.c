#include <stdio.h>
int main() {

    int mark;

    printf("Enter the mark: \n");
    scanf("%d", &mark);

    if (mark == 0)
    {
        printf("The mark %d is zero\n", mark);
    }
    else if (mark < 40)
    {
        printf("The mark %d is a fail\n", mark);
    }
    else 
    {
        printf("The mark %d is a pass\n", mark);
    }

    return 0;
}