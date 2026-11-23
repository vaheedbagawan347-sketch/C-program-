#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35)
        printf("Result = Fail\n");
    else if (percentage >= 75)
        printf("Class = Distinction\n");
    else if (percentage >= 60)
        printf("Class = First Class\n");
    else if (percentage >= 50)
        printf("Class = Second Class\n");
    else
        printf("Class = Pass Class\n");

    return 0;
}
