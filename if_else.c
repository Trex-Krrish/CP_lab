#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("your age is %d\n", age);
    if (age >= 60)
    {
        printf("You are a Senior Citizen");
    }
    else if(age >=18){
        printf("you are an Adult");
    }
    else if(age >0){
        printf("You are a children / Teenager");
    }
    else{
        printf("Enter a valid age");
    }

    return 0;
}
