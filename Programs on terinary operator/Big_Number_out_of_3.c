#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?
    printf("\n%d is the largest number.",a):
    (b>c)?
    printf("\n%d is the largest number.",b):
    printf("\n%d is the largest number.",c);
    return 0;
}