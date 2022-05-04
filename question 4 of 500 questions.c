//Write a C program to convert specified days into years, weeks and days.

#include <stdio.h>
void main()
{
int days, years, weeks;
	printf("Enter the number of days: ");
	scanf("%d",&days);
	years= days/365 ;
	printf("\nYears= %d ",years);
	weeks = (days%365)/7 ;
	printf("\nWeeks= %d",weeks);
    days= days-((years*365) + (weeks*7));
    printf("\nDays = %d",days);
return 0;
}
