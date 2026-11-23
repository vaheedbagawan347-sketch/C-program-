#include <stdio.h>

int main()
{
    int n, start, end;
    int i, j, isPrime;

    /* Part (a): Check whether a number is prime */
    printf("Enter an integer: ");
    scanf("%d", &n);

    isPrime = 1;

    if (n <= 1)
        isPrime = 0;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\\n", n);
    else
        printf("%d is not a Prime number.\\n", n);

    /* Part (b): Display prime numbers in a range */
    printf("\\nEnter lower limit: ");
    scanf("%d", &start);

    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Prime numbers are:\\n");

    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue;

        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
