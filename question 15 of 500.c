/*Write a C program that reads an integer and check the specified range
where it belongs. Print an error message if the number is negative and
greater than 80.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("enter the value: ");
    scanf("%d",&a);
    if (a<0 || a> 80){
        printf("\nIt's an error!!");
}
    else
    {
        printf("\nEverything is okay");
    }
}
