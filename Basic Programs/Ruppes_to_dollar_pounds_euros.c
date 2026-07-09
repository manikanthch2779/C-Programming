#include<stdio.h>
int main()
{
    float rupees,dollars,pounds,euros;
    printf("\nEnter Rupees value");
    scanf("%f",&rupees);
    dollars=rupees/82.74;
    pounds=rupees/95.88;
    euros=rupees/88.45;
    printf("\nAmount in dollars is %f",dollars);
    printf("\nAmount in pounds is %f",pounds);
    printf("\nAmount in euros is %f",euros);
    return 0;
}
    