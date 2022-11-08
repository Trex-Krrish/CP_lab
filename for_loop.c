#include <stdio.h>

int main()
{
    int i,j;

    // for ( i = 0; i < 5; i++)
    // {
    //     printf("%d\n",i+1);
    // }
    


    for ( i = 0, j = 0; i < 5; i++,j=j+2)
    {
        printf("%d %d\n",i+1,j);
    }
    
    return 0;
}
