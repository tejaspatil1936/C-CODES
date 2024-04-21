// wap to print addition of two nos using functions.

#include <stdio.h>

int add(int a,int b) 
{
    return a+b;
}
int main() 
{
    int a,b,sum;
    
    printf("enter the first number:");
    scanf("%d",&a);
    
    printf("enter the second number:");
    scanf("%d",&b);
    
    sum = add(a,b);
    printf("sum of numbers is %d \n",sum);
    
    return 0;
}
