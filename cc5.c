// Given a positive integer
// N, Chef wants to determine if it is possible to rearrange the digits of
// N and obtain a multiple of 5

#include <stdio.h>

int main(void)
{
	int n, r;
	int found = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		r = n % 10;
		if (r == 5 || r == 0)
		{
			found++;
		}
		n = n / 10;
	}
	if (found != 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}