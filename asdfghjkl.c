#include<stdio.h>
int main()
{

 int n;
 int s=0;

do { printf("Enter any num: "); 
     scanf("%d", &n); }

s=s+n;

 while ( n!=0); 
printf("sum = %d", s);
return 0;
}