#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i, sum = 0, max, min;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter a positive number of elements.\\n");
        return 1;
    }

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed.\\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    max = min = *p;

    for (i = 0; i < n; i++)
    {
        sum += *(p + i);

        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < min)
            min = *(p + i);
    }

    avg = (float)sum / n;

    printf("Sum = %d\\n", sum);
    printf("Average = %.2f\\n", avg);
    printf("Largest = %d\\n", max);
    printf("Smallest = %d\\n", min);

    free(p);

    return 0;
}
