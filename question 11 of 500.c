/*Write a C program to calculate the distance between the two points.*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter the point(x1,y1): ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the point(x2,y2): ");
    scanf("%f%f",&x2,&y2);
    distance=sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1)));
    printf("The distance between two points is : %f",distance);
    return 0;

}
