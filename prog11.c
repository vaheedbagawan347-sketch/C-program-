#include <stdio.h>

int main()
{
    int n, i, terms, a = 0, b = 1, c;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld\\n", fact);

    printf("Enter Fibonacci terms: ");
    scanf("%d", &terms);

    printf("Fibonacci: ");
    for (i = 1; i <= terms; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
