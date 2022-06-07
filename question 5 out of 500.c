//Write a C program that accepts two integers from the user and calculate the sum of the two integers.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,sum;
    printf("enter the elements: ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("Sum: %d",sum);
    return 0;
}
