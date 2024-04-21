// programme to read radius of circle and print its area and circumference
#include <stdio.h>
int main() {
    int radius,circumfarence,area;
    printf("enter value of radius");
    scanf("%d",&radius);
    int pi = 3.14;
    circumfarence = 2 * pi * radius;
    area = pi * radius * radius;
    printf("circumfarence of circle = %d \n",circumfarence);
    printf("area of circle = %d",area);
    return 0;
}
