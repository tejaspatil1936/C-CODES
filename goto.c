// #include <stdio.h>
// int main() 
// {
//     new:
//     printf("\nHello");
//     printf("\nwe are learning goto statement");
//     goto new;
//     return 0;
// }

#include <stdio.h>
int main() 
{
    int n,i,j;
    for(i=0;i<=10;i++)
    {
        printf("%d",i);
        for(j=0;j<10;j++)
        {
            printf(" enter any no,enter 0 to exit\n");
            scanf("%d",&n);
            if(n==5)
            {
                goto exit;
            }
        }        
    
    }
    exit:
    return 0;
}
