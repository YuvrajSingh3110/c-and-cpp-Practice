#include <stdio.h>
int main()
{
    float marks[10];
    printf("Enter the marks of students, separated by a space: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &marks[i]);
    }
    printf("The marks of 10 students are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", marks[i]);
    }
    printf("Now enter the number of student whose marks you want to delete: ");
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 10)
    {
        printf("Please enter a valid number");
    }
    else
    {
        marks[n - 1] = marks[n];
        printf("The final list of marks is: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%f ", marks[i]);
        }
    }
    return 0;
}