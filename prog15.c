#include <stdio.h>

int main()
{
    int a[100], b[100], c[100];
    int n, i, j, temp;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size. Enter a value from 1 to 100.\\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = c[i] = a[i];
    }

    printf("Original: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

    printf("\\nAscending: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (c[j] < c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }

    printf("\\nDescending: ");
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);

    return 0;
}
