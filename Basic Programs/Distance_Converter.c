#include<stdio.h>
int main()
{
    float miles,km;
    printf("\nEnter Miles value");
    scanf("%f",&miles);
    km=miles*1.60934;
    printf("Distance in kilometers is %f",km);
    return 0;
}