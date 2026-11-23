#include <stdio.h>

struct Student
{
    int reg;
    char name[30];
    float m1, m2, m3, total, per;
    char result[10];
};

int main()
{
    struct Student s[50];
    int n = 0, ch, i, reg, found;
    FILE *fp;

    do
    {
        printf("\\n1.Add 2.Display 3.Search 4.Write 5.Read 6.Exit\\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                if (n >= 50)
                {
                    printf("Record limit reached.\\n");
                    break;
                }

                printf("Reg No: ");
                scanf("%d", &s[n].reg);

                printf("Name (no spaces): ");
                scanf("%29s", s[n].name);

                printf("Enter 3 marks: ");
                scanf("%f%f%f", &s[n].m1, &s[n].m2, &s[n].m3);

                s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
                s[n].per = s[n].total / 3;

                if (s[n].m1 >= 35 && s[n].m2 >= 35 && s[n].m3 >= 35)
                    sprintf(s[n].result, "PASS");
                else
                    sprintf(s[n].result, "FAIL");

                n++;
                break;

            case 2:
                for (i = 0; i < n; i++)
                    printf("%d %s %.0f %.0f %.0f %.0f %.2f %s\\n",
                           s[i].reg, s[i].name, s[i].m1, s[i].m2,
                           s[i].m3, s[i].total, s[i].per, s[i].result);
                break;

            case 3:
                printf("Enter Reg No: ");
                scanf("%d", &reg);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (s[i].reg == reg)
                    {
                        printf("%d %s %.2f %s\\n",
                               s[i].reg, s[i].name, s[i].per, s[i].result);
                        found = 1;
                    }
                }

                if (!found)
                    printf("Record not found\\n");
                break;

            case 4:
                fp = fopen("students.txt", "w");
                if (fp == NULL)
                {
                    printf("Unable to open file for writing.\\n");
                    break;
                }

                for (i = 0; i < n; i++)
                    fprintf(fp, "%d %s %.2f %.2f %.2f %.2f %.2f %s\\n",
                            s[i].reg, s[i].name, s[i].m1, s[i].m2,
                            s[i].m3, s[i].total, s[i].per, s[i].result);

                fclose(fp);
                printf("Records saved\\n");
                break;

            case 5:
                fp = fopen("students.txt", "r");
                if (fp == NULL)
                {
                    printf("File not found\\n");
                    break;
                }

                n = 0;
                while (n < 50 &&
                       fscanf(fp, "%d %29s %f %f %f %f %f %9s",
                              &s[n].reg, s[n].name, &s[n].m1, &s[n].m2,
                              &s[n].m3, &s[n].total, &s[n].per,
                              s[n].result) == 8)
                {
                    printf("%d %s %.2f %s\\n",
                           s[n].reg, s[n].name, s[n].per, s[n].result);
                    n++;
                }

                fclose(fp);
                break;

            case 6:
                printf("Exiting program.\\n");
                break;

            default:
                printf("Invalid choice\\n");
        }
    } while (ch != 6);

    return 0;
}
