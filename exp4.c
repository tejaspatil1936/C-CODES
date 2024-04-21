// write a program to find greatest no between 3 numbers.

#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = num1;  

    if (num2 > greatest) 
    {
        greatest = num2;
    }

    if (num3 > greatest) 
    {
        greatest = num3;
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}







