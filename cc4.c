// Chef has been assigned a homework from his school. He has been given a series of numbers denoted by S 
// and asked to count the numbers in the series which are divisible by both 

#include <stdio.h>

int main(void) {
    
	int i,n,t;
	scanf("%d",&t);
	while(t--)
	{
	int count=0;
	scanf("%d",&n);
	int num[n];
	
	for(i=0;i<n;i++)
	{
	    scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(num[i]%3==0 && num[i]%12==0)
	    {
	        count=count+1;
	    }
	}
	printf("%d\n",count);
	}
	return 0;
}

