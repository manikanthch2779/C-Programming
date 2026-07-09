#include<stdio.h>
int main()
{
    int sec,hr,min;
    printf("Enter the number of seconds: ");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec%3600)/60;
    sec=sec%60;
    printf("Time is %d hours, %d minutes, and %d seconds",hr,min,sec);
    return 0;
}