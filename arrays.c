  #include <stdio.h>
int main() {
    int n[5] ,i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }  
    for(i=0;i<5;i++)
    printf("\nelement of array at index %d is %d",i,n[i]);    
    return 0; 
