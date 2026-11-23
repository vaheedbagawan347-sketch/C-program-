#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("All three numbers are equal.\n");
    else if (a == b)
    {
        if (a > c)
            printf("A and B are equal and largest.\n");
        else
            printf("A and B are equal.\n");
    }
    else if (a == c)
    {
        if (a > b)
            printf("A and C are equal and largest.\n");
        else
            printf("A and C are equal.\n");
    }
    else if (b == c)
    {
        if (b > a)
            printf("B and C are equal and largest.\n");
        else
            printf("B and C are equal.\n");
    }
    else
    {
        if (a > b)
        {
            if (a > c)
                printf("%d is largest.\n", a);
            else
                printf("%d is largest.\n", c);
        }
        else
        {
            if (b > c)
                printf("%d is largest.\n", b);
            else
                printf("%d is largest.\n", c);
        }
    }

    return 0;
}
