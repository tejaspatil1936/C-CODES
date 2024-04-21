// wap to write the expression in c language

#include <stdio.h>
int main() 
{
    int x,y;
    printf("enter the value of x ");
    scanf("%d",&x);

    y = 3*x*x + 2*x + 1;
    printf("value of the expression is %d\n",y);
    
    return 0;
}