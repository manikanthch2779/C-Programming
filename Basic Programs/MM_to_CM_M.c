#include<stdio.h>
int main()
{
    float mm,cm,m;
    printf("\nEnter millimeters value");
    scanf("%f",&mm);
    cm=mm/10;
    m=mm/1000;
    printf("\nDistance in centimeters is %f",cm);
    printf("\nDistance in meters is %f",m);
    return 0;
}