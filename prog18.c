#include <stdio.h>

int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a / gcd(a, b)) * b;
}

long long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

long long power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main()
{
    int ch, a, b, n, x;

    do
    {
        printf("\\n1.GCD 2.LCM 3.Factorial 4.Power 5.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("GCD = %d\\n", gcd(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("LCM = %d\\n", lcm(a, b));
                break;

            case 3:
                printf("Enter a non-negative number: ");
                scanf("%d", &n);
                if (n < 0)
                    printf("Factorial is not defined for negative numbers.\\n");
                else
                    printf("Factorial = %lld\\n", fact(n));
                break;

            case 4:
                printf("Enter base and non-negative exponent: ");
                scanf("%d%d", &x, &n);
                if (n < 0)
                    printf("This program accepts only non-negative exponents.\\n");
                else
                    printf("Power = %lld\\n", power(x, n));
                break;

            case 5:
                break;

            default:
                printf("Invalid choice\\n");
        }
    } while (ch != 5);

    return 0;
}
