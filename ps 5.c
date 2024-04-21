//write a programme to find roots of quadratic equation.

#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,x,y; 
        printf("enter coefficient of a:");
        scanf("%f",&a);
        printf("enter coefficient of b:");
        scanf("%f",&b);
        printf("enter coefficient of c:");
        scanf("%f",&c);
        d = sqrt(b*b-4*a*c);
        x = (-b+d)/(2*a);
        y = (-b-d)/(2*a);
        printf("Root 1 = %.2f and Root 2 = %.2f", x,y);
    return 0;
}
