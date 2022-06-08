/*Write a C program that accepts an employee's ID, total worked hours
of a month and the amount he received per hour. Print the
employee's ID and salary (with two decimal places) of a particular
month.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int id;
    float hr,shr,s;
    printf("Employer's ID: ");
    scanf("%d",&id);
    printf("\nWorking hours: ");
    scanf("%f",&hr);
    printf("\nSalary per hour: ");
    scanf("%f",&shr);
    s=shr*hr*30;
    printf("\nEmployer's ID: %d",id);
    printf("\nTotal salary received per month: %f",s);
    return 0;
}
