#include <stdio.h>

int main()
{
    char a[100], b[100], copy[100], rev[100], con[200];
    int i, j, n1 = 0, n2 = 0, same = 1;

    printf("Enter first string (no spaces): ");
    scanf("%99s", a);

    printf("Enter second string (no spaces): ");
    scanf("%99s", b);

    while (a[n1] != '\\0')
        n1++;
    while (b[n2] != '\\0')
        n2++;

    printf("Length = %d, %d\\n", n1, n2);

    for (i = 0; i <= n1; i++)
        copy[i] = a[i];

    printf("Copy = %s\\n", copy);

    for (i = 0; i < n1; i++)
        con[i] = a[i];

    for (j = 0; j <= n2; j++)
        con[i + j] = b[j];

    printf("Concatenation = %s\\n", con);

    for (i = 0; i < n1 && i < n2; i++)
        if (a[i] != b[i])
            same = 0;

    if (same && n1 == n2)
        printf("Strings are equal\\n");
    else
        printf("Strings are not equal\\n");

    for (i = 0; i < n1; i++)
        rev[i] = a[n1 - i - 1];

    rev[n1] = '\\0';
    printf("Reverse = %s\\n", rev);

    same = 1;
    for (i = 0; i < n1; i++)
        if (a[i] != rev[i])
            same = 0;

    if (same)
        printf("Palindrome\\n");
    else
        printf("Not Palindrome\\n");

    return 0;
}
