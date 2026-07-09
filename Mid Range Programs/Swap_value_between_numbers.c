#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}

