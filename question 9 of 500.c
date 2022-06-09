/*Write a C program that accepts three integers and find the maximum
of three.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c;
    printf("Enter 3 Integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("\nEnter the maximum number: %d",a);
    }
    else if (b>a && b>c)
    {
        printf("\nEnter the maximum number: %d",b);
    }
    else if (c>a && c>b)
    {
        printf("\nEnter the maximum number: %d",c);
    }
    else
    {
        printf("\nAll the numbers are same");
    }
    return 0;
}
