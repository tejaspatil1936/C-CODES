// wap to read 3 nos and print graetest no between them

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a , b and c");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a>b && a>c)
    {
        printf("%d is greatest no\n",a);
    }
    else if(b>c)
    {
        printf("b%d is greatest no\n",b);
    }
    else
    {
        printf("%d is greatest no\n",c);
    }
    return 0;
}