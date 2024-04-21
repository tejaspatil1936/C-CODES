// wap to read array of 15 nos and cout even and odd nos

#include <stdio.h>
int main() 
{
    int n[15],i,even = 0 ,odd = 0;
    printf("enter numbers\n");
    
    for(i=0;i<15;i++)
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
    
    printf("%d numbers are even\n",even);
    printf("%d numbers are odd\n",odd);

    return 0;
}
