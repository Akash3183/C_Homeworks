/*Write a C program to convert a given integer (in seconds) to hours,
minutes and seconds.*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int hr,m,s;
    printf("Enter the integer in seconds: ");
    scanf("%d",&s);
    hr=s/3600;
    m=(s-(3600*hr))/60;
    s=(s-(3600*hr)-(60*m));
    printf("\nHours: %d",hr);
    printf("\nMinutes: %d",m);
    printf("\nSeconds: %d",s);
    return 0;

}

