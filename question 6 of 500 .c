//Write a C program that accepts two integers from the user and calculate the product of the two integers.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,prod;
    printf("enter the elements: ");
    scanf("%d%d",&a,&b);
    prod = a*b;
    printf("Product of two integers: %d",prod);
    return 0;
}
