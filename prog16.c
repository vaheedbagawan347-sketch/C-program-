#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], r[10][10];
    int r1, c1, r2, c2, i, j, k, ch;

    printf("Enter rows and columns of A: ");
    scanf("%d%d", &r1, &c1);

    if (r1 <= 0 || c1 <= 0 || r1 > 10 || c1 > 10)
    {
        printf("Invalid dimensions for matrix A.\\n");
        return 1;
    }

    printf("Enter elements of A:\\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of B: ");
    scanf("%d%d", &r2, &c2);

    if (r2 <= 0 || c2 <= 0 || r2 > 10 || c2 > 10)
    {
        printf("Invalid dimensions for matrix B.\\n");
        return 1;
    }

    printf("Enter elements of B:\\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    do
    {
        printf("\\n1.Add 2.Subtract 3.Transpose 4.Multiply 5.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1 || ch == 2)
        {
            if (r1 != r2 || c1 != c2)
                printf("Invalid dimensions\\n");
            else
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        r[i][j] = (ch == 1) ?
                                  a[i][j] + b[i][j] :
                                  a[i][j] - b[i][j];
                        printf("%d ", r[i][j]);
                    }
                    printf("\\n");
                }
            }
        }
        else if (ch == 3)
        {
            printf("Transpose of matrix A:\\n");
            for (i = 0; i < c1; i++)
            {
                for (j = 0; j < r1; j++)
                    printf("%d ", a[j][i]);
                printf("\\n");
            }
        }
        else if (ch == 4)
        {
            if (c1 != r2)
                printf("Multiplication not possible\\n");
            else
            {
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c2; j++)
                    {
                        r[i][j] = 0;
                        for (k = 0; k < c1; k++)
                            r[i][j] += a[i][k] * b[k][j];
                    }

                printf("Product matrix:\\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                        printf("%d ", r[i][j]);
                    printf("\\n");
                }
            }
        }
        else if (ch != 5)
            printf("Invalid choice\\n");

    } while (ch != 5);

    return 0;
}
