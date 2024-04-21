// Chef decides to solve at least 10 problems every week for 4 weeks.
// Given the number of problems he actually solved in each week over 4 weeks

#include <stdio.h>

int main(void)
{
	int a[4], i, count = 0;
	for (i = 0; i <= 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= 3; i++)
	{
		if (a[i] >= 10)
		{
			count += 1;
		}
	}
	printf("%d\n", count);
	return 0;
}
