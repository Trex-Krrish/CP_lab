#include <stdio.h>
int main(){
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your Marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45\n");
            break;
        default:
        printf("Your marks is not 45");
            break;
        }
        break;
    case 13:
        printf("Your age is 13");
        break;
    case 23:
        printf("Your age is 23");
        break;
    
    default:
    printf("Your age is not 3,13 and 23");
        break;
    }
    return 0;
}
