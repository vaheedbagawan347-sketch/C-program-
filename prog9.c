#include <stdio.h>

int main()
{
    int n, temp, digit;
    int digits = 0;
    int sum = 0;
    int power, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;
    do
    {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;
        for (i = 1; i <= digits; i++)
            power *= digit;

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}
