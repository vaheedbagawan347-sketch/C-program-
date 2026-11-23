#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int max, min, even = 0, odd = 0;
    float mean;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size. Enter a value from 1 to 100.\\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 0; i < n; i++)
    {
        sum += a[i];

        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    mean = (float)sum / n;

    printf("Sum = %d\\n", sum);
    printf("Mean = %.2f\\n", mean);
    printf("Largest = %d\\n", max);
    printf("Smallest = %d\\n", min);
    printf("Even = %d\\n", even);
    printf("Odd = %d\\n", odd);

    return 0;
}
