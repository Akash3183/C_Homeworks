/*Write a C program to convert a given integer (in days) to years, months
and days, assumes that all months have 30 days and all years have 365 days.*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
     int d,m,y;
     printf("Enter the days: ");
     scanf("%d",&d);
     y=d/365;
     m=((d-(y*365))/30);
     d=(d-(y*365)-(m*30));
     printf("\nYears: %d",y);
     printf("\nMonths: %d",m);
     printf("\nDays: %d",d);
     return 0;

}

