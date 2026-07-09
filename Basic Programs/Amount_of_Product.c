#include<stdio.h>
int main()
{
    int price,quantity,amount;
    printf("Enter price and quantity of the product: ");
    scanf("%d%d",&price,&quantity);
    amount=quantity*price;
    printf("\nAmount of the product is %d",amount);
    return 0;
}