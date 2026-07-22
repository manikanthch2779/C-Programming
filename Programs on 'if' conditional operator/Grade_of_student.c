#include<stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float average;
    printf("Enter marks for three subjects: ");
    scanf("%d%d%d", &sub1, &sub2, &sub3);
    average = (sub1 + sub2 + sub3) / 3.0;
    if(average >= 80)
    {
        printf("\nGrade: A");
    }
    else if(average >= 60)
    {
        printf("\nGrade: B");
    }
    else if(average >= 35)
    {
        printf("\nGrade: C");
    }
    else
    {
        printf("\nGrade: Fail");
    }
    return 0;
}