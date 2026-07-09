#include<stdio.h>
int main()
{
    int mat,phy,che,tot,avg;
    printf("Enter marks of Maths, Physics and Chemistry: ");
    scanf("%d%d%d",&mat,&phy,&che);
    tot=mat+phy+che;
    avg=tot/3;
    printf("Total marks is %d",tot);
    printf("Average marks is %d",avg);
    return 0;
}