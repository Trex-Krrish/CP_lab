#include <stdio.h>
// Writing the fuction after main but add the sub before starting main.
int sum(int a, int b); // with argument and with return.
void star(int n);      // with argument and without return.
int getnumber();       // without argument and with return.
int name();            // Without argument and without return.

int main()
{
    int a = 8, b = 22, c;
    // c = sum(a, b);
    // printf("The sum is: %d", c);
    // star(5);
    // c = getnumber();
    // printf("The number entered is: %d", c);
    printf("My name is: ");
    name();

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int getnumber()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    return i;
}
int name()
{
    printf("Krrish");
}