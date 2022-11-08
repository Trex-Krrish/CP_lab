#include <stdio.h>

int main()
{
    int marks[5] = {20,40,60,80,19};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of roll no %d: ", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 5; i++)
    {
       // printf("The result of Roll no %d is %d\n", i,marks[i]);
    }
    
    int twodmarks[2][4] = {
        {1,3,5,7},
        {2,4,6,8}
    };
    // printf("%d", twodmarks[1][2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", twodmarks[i][j]);
        }
        printf("\n");
    }
    

    
    return 0;
}
