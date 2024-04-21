/*Given an integer N, find the sum of first N natural numbers.
 Natural numbers consists of all positive numbers starting from 1 to infinity - 1, 2, 3, ...., N*/

 #include <stdio.h>
int main(void) {	
	int n,a;
	scanf("%d",&n);
	
	printf("%d",(n*(n+1))/2);
	
	return 0;
}