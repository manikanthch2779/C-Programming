#include<stdio.h>
int main()
{
    float quan,rate,amou,disc,neta;
    printf("\nEnter quantity and rate of the product: ");
    scanf("%f%f",&quan,&rate);
    amou=quan*rate;
    disc=amou*0.05;
    neta=amou-disc;
    printf("\nNet amount is %f",neta);
    printf("\nDiscount is %f",disc);
    return 0;
}