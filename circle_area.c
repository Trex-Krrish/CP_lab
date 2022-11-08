#include <stdio.h>
#include <conio.h>

void main()
{
    int r;
    float pi=3.14,area;
    printf("Enter the value of radius:");
    scanf("%d",&r);
    area = pi*r*r;
    printf("The area of circle of radius of %d is: %f",r,area);
    getch();
}