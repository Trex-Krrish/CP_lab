#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,sum;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);
    sum =a+b;
    printf("The addition of %d and %d is: %d",a,b,sum);
    getch();
}
