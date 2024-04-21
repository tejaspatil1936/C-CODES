//Arthur is a big fan of Pizza. But to test his control, he decided to give up on pizza for at least 50 days.
// Given integer 
// N, where 
// N is number of days Arthur didn't eat pizza, decide whether he is successful or not.

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	if(n<50)
	{
	    printf("NO");
	}
	else
	{
	    printf("YES");
	}
	return 0;
}

