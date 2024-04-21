// write a programme to read marks of 5 subjects and print sum and percentage
#include <stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5,sum,percentage;
    printf("enter marks of sub1, sub2, sub3, sub4, sub5");
    scanf("%d %d %d %d %d",&sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("sum of marks = %d \n",sum);
    printf("percentage =%d",percentage);
    return 0;
}