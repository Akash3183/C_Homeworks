/*write a c program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litres, float number – 2 decimal point).*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int distance;
    float fuel,avg;
    printf("Total distance covered by the bike in Km: ");
    scanf("%d",&distance);
    printf("\nTotal fuel consumption by the bike in litres: ");
    scanf("%f",&fuel);
    avg=distance/fuel;
    printf("\nAverage Consumption: %f",avg);
    return 0;

}
