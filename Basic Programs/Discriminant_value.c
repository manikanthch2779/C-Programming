#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    printf("The discriminant value is %d",d);
    return 0;
}