// functions with argument and return 

#include <stdio.h>
int sum()
{
    int a,b;
    printf("enter two nos");
    scanf("%d %d",&a, &b);
    return a+b;
}
int main()
{
    int c;
    c = sum();
    printf("%d",c);
    return 0;
}