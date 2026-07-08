#include<stdio.h>
int main()
{
    float cels,fah;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cels);
    fah=(cels*9/5)+32;
    printf("Temperature in Fahrenheit is %f",fah);
    return 0;
}