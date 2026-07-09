#include<stdio.h>
int main(0
{
    int a,b;
    printf("\nEnter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}