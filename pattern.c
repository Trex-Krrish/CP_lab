#include <stdio.h>

int main()
{
    int num;
    printf("Enter '0' for trianglural star pattern or Enter '1' for reversed trianglural star pattern: ");
    scanf("%d", &num);

    if (num == 0)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (num == 1)
    {
        for (int i = 5; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("please enter a valid number");
    }
    return 0;
}
