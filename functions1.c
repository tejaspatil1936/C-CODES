// function with argument and without return value

#include <stdio.h>
int printstar(int n)
{
    int i;
    i =0;
    while(n--)
    {
       printf("*");
    }
}
int main()
{
    printstar(5);
    return 0;
}