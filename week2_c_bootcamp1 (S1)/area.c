#include <stdio.h>
int main() {
    float width, height, area;

    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);

    area = width * height;

    printf("Area is %.2f\n", area);

    return 0;
}