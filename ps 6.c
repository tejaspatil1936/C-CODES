#include <stdio.h>

int main() 
{
    int number;
        printf("enter the number");
        scanf("%d",&number);

        if (number%number==0 && number%1==0) 
        {
            printf("number is prime");
        }
        else
        {
            printf("numberis not prime");
        }

    return 0;
}
