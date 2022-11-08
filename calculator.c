#include <stdio.h>
#include <conio.h>

void main(){
    int num,a,b;
    printf("Enter the index number to do function\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Enter the value of A: ");
        scanf("%d",&a);
        printf("Enter the value of B: ");
        scanf("%d",&b);
        printf("The answer is %d",a+b);
        break;
    case 2:
        printf("Enter the value of A: ");
        scanf("%d",&a);
        printf("Enter the value of B: ");
        scanf("%d",&b);
        printf("The answer is %d",a-b);
        break;
    case 3:
        printf("Enter the value of A: ");
        scanf("%d",&a);
        printf("Enter the value of B: ");
        scanf("%d",&b);
        printf("The answer is %d",a*b);
        break;
    case 4:
        printf("Enter the value of A: ");
        scanf("%d",&a);
        printf("Enter the value of B: ");
        scanf("%d",&b);
        printf("The answer is %d",a/b);
        break;
    default:
    printf("Enter a valid number");
        break;
    }
    getch();
}