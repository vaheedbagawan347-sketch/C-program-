#include <stdio.h>

int main()
{
    float length, width, radius;
    float base, height;
    float area, perimeter;
    float pi = 3.14;

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Rectangle Area = %.2f\n", area);
    printf("Rectangle Perimeter = %.2f\n", perimeter);

    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("Circle Area = %.2f\n", area);
    printf("Circle Circumference = %.2f\n", perimeter);

    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;
    printf("Triangle Area = %.2f\n", area);

    return 0;
}
