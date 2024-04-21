#include <stdio.h>
int main() 
{
    int number,digit1,digit2,digit3,digit4,n;
        printf("enter a four digit number");
        scanf("%d",&number);
        digit1 = number % 10;
        digit2 = (number % 100)/10;
        digit3 = (number % 1000)/100; 
        digit4 = number / 1000;
        n = 1000*digit1+100*digit2+10*digit3+digit4;
        printf("number in reverse order is : %d",n);
    return 0;    
}




