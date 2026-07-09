#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,semip,dis,root;
    printf("Enter the sides a,b,c of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    semip=(a+b+c)/2;
    dis=semip*(semip-a)*(semip-b)*(semip-c);
    root=sqrt(dis);
    printf("Area of the triangle is %d",root);
    return 0;
}