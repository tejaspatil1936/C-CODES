/* write a c program to find sum of series 
   1+1/2+1/3+1/4+1/n */

#include <stdio.h>
int main() 
{
    int n;
    float i, sum; 
    sum = 0.0; 
    
    printf("enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        sum += 1 / (i); 
    }
    
    printf("sum of the series is %f\n", sum);
    
    return 0;
}
