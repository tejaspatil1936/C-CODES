// wap to write expression in c language

#include <stdio.h>
int main() 
{
    int m, n, x, y, z;
    
    printf("Enter the values of m,n,x,and y : ");
    scanf("%d %d %d %d", &m, &n, &x, &y);
    
    z = (m + n) * (x + y);
    
    printf("the value of z is: %d\n", z);
    
    return 0;
}
