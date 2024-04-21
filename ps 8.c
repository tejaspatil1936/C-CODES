/*write a code in c to identify if year is leap year or not 
condition is it must be divisible by 4 but not by 100 or 400*/

#include <stdio.h>
int main() {
    int year;
        printf("enter year");
        scanf("%d",&year);
        if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0)
        {
            printf("%d is leap year",year);
        }        
        else
        {
            printf("%d is not leap year",year);
        }
    return 0;    
}