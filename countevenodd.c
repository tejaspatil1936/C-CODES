#include <stdio.h>
int main() 
{
    int n[10],i,even = 0 ,odd = 0;
    printf("enter numbers\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        
        if(n[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }    
    
    printf("%d numbers are even from entered nos\n",even);
    printf("%d numbers are odd from entered nos\n",odd);

    return 0;
}
