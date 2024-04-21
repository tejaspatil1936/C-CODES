
// write a programme to read marks of 5 subjects and print sum and percentage.

#include <stdio.h>
int main() {

    int sub1, sub2, sub3, sub4, sub5,sum,percentage;
        printf("enter marks of sub1, sub2, sub3, sub4, sub5\n");
        scanf("%d %d %d %d %d",&sub1, &sub2, &sub3, &sub4, &sub5);

        sum = sub1+sub2+sub3+sub4+sub5;
        percentage = (sub1+sub2+sub3+sub4+sub5)/5;

        printf("sum of marks = %d \n",sum);
        printf("percentage =%d \n",percentage);
        
        if(percentage >= 60)
        {
            printf("student is passed with 1st class\n");
        }
        else
        {
            printf("student is not passed with 1st class\n");
        }
    return 0;
}






























