#include <stdio.h>

int main()
{
    int a[100], n, key, i, count = 0;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Position: %d\\n", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("Element not found\\n");
    else
        printf("Frequency = %d\\n", count);

    return 0;
}
