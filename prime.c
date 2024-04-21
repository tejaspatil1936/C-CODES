#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("enter the no : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        n % i;
        if (n % i == 0)
        {
            count++;
        }  
    }
    if (count == 1)
    {
        printf("%d is prime number \n", n);
    }
    else
    {
            printf("%d in not a prime number \n", n);
    }
    return 0;
}
