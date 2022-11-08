#include <stdio.h>

int main()
{
    int a = 0,num;
    printf("Enter the value you want to display: ");
    scanf("%d", &num);
    while (a<num)
    {
        printf("%d\n",a+1);
        a = a+1;
    }
    
    return 0;
}
