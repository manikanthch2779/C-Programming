#include<stdio.h>
int main()
{
    float prin,time,rate,si;
    printf("Enter principal,time and rate: ");
    scanf("%f%f%f",&prin,&time,&rate);
    si=(prin*time*rate)/100;
    printf("Simple interest is %f",si);
    return 0;
}