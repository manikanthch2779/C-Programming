#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter base and height of the triangle: ");
    scanf("%d%d",&base,&height);
    area=0.5*base*height;
    printf("Area of the triangle is %d",area);
    return 0;
}