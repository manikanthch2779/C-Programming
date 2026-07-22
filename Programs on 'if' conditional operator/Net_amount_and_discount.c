#include<stdio.h>
int main()
{
    int quantity,rate,amount,discount,net_amount;
    printf("Enter the quantity and rate of the product: ");
    scanf("%d%d",&quantity,&rate);
    amount = quantity * rate;
    if(amount >=20000)
    {
        discount = amount * 0.15;
    }
    else if(amount >=10000)
    {
        discount = amount * 0.10;
    }
    else if(amount >=5000)
    {
        discount = amount * 0.05;
    }
    else
    {
        discount = 0;
    }
    net_amount = amount - discount;
    printf("\nThe net amount is: %d", net_amount);
    return 0;
}