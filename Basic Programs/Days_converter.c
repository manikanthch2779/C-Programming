#include<stdio.h>
int main()
{
    int days,weeks,months,years;
    printf("\nEnter number of days: ");
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    weeks=((days%365)%30)/7;
    days=days%7;
    printf("\nYears: %d",years);
    printf("\nMonths: %d",months);
    printf("\nWeeks: %d",weeks);
    printf("\nDays: %d",days);
    return 0;
}