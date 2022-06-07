//Write a C program that accepts two item’s weight (floating points' values) and number of purchase (floating points' values) and calculate the average value of the items.
#include<stdio.h>
#include<stdlib.h>

void main()
{
    float a,b,avg;
    int n1,n2;
    printf("weight of item1: ");
    scanf("%f",&a);
    printf("weight of item2: ");
    scanf("%f",&b);
    printf("number of purchase of item1: ");
    scanf("%d",&n1);
    printf("number of purchase of item2: ");
    scanf("%d",&n2);

    avg=((n1*a)+(n2*b))/(n1+n2);
    printf("The average value of the items: %f",avg);
    return 0;
}
