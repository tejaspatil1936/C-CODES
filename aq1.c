// wap to print 1 to 10 nos using for and while loops.

#include <stdio.h>
int main() 
{
    int i;
        printf("using for loop\n");
        for(i=0;i<=10;i++)
        {
            printf("%d\n",i);
        }
    
    i=0;
        printf("using while loop\n");
        while(i<=10)
        {
            printf("%d\n",i);
            i++; 
        }
        
    return 0;
}