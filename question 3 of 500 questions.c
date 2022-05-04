//Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>
void main()
{
float radius,perimeter,area;
	printf("Enter the radius of a circle: ");
	scanf("%f",&radius);
	area = (3.143)*radius*radius;
	printf("\nCalculate area of the circle= %f",area);
	perimeter = 2*(3.143)*radius;
	printf("\nCalculate perimeter of the circle= %f ",perimeter);
return 0;
}
