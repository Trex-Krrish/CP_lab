#include <stdio.h>

int main()
{
    int a, age;
    for (a = 0; a < 10; a++)
    {
        printf("%d\n Enter your age: ", a);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if(age >10){
            continue;
        }
        printf("This is continue atatement\n");
    }

    return 0;
}
