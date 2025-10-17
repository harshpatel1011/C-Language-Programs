#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int total, min, max;
    float percentage;

    printf("Enter Marks of 5 Subjets(Out of 100): \n");
    printf("Subject 1: ");
    scanf("%d", &m1);
    printf("Subject 2: ");
    scanf("%d", &m2);
    printf("Subject 3: ");
    scanf("%d", &m3);
    printf("Subject 4: ");
    scanf("%d", &m4);
    printf("Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    percentage = (float)total / 5;

    min = m1;
    if (m2 < min)
        min = m2;
    if (m3 < min)
        min = m3;
    if (m4 < min)
        min = m4;
    if (m5 < min)
        min = m5;

    max = m1;
    if (m2 > max)
        max = m2;
    if (m3 > max)
        max = m3;
    if (m4 > max)
        max = m4;
    if (m5 > max)
        max = m5;

    printf("\n----Student Result----\n");
    printf("Subject 1: %d\n", m1);
    printf("Subject 2: %d\n", m2);
    printf("Subject 3: %d\n", m3);
    printf("Subject 4: %d\n", m4);
    printf("Subject 5: %d\n", m5);
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Minimum Marks: %d\n", min);
    printf("Maximum Marks: %d\n", max);

    if (m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33)
    {
        printf("Result = Pass\n");

        if (percentage >= 90)
        {
            printf("Grade = A+\n");
        }
        else if (percentage >= 75)
        {
            printf("Grade = A\n");
        }
        else if (percentage >= 60)
        {
            printf("Grade = B\n");
        }
        else if (percentage >= 50)
        {
            printf("Grade = C\n");
        }
        else if (percentage >= 40)
        {
            printf("Grade = D\n");
        }
        else
        {
            printf("Grade = E\n");
        }
    }
    else
    {
        printf("Result = Fail\n");
        printf("Grade = F\n");
    }

    return 0;
}