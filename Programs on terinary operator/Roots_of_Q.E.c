#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2,discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    discriminant > 0?printf("\nRoots are real and different."):
    discriminant == 0?printf("\nRoots are real and same."):
    printf("\nRoots are imaginary.");
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);
    printf("\nRoots are %.2f and %.2f", root1, root2);
    return 0;
}