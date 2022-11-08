#include <stdio.h>

int main()
{
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter a value to run loop or Enter 0 to End\n");
            scanf("%d", &num);
            if(num==0){
                // break;
                goto end;
            }
        }
        
    }
    end: printf("Loop has been ended");
    
    return 0;
}
