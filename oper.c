#include <stdio.h>

int main() {
int y;
    int x=10;
    printf("%d \n",x);
    x += 5;
    printf("%d \n",x);
    x += 10;
    printf("%d \n",x);
    x-= 7;
    printf("%d \n",x);
    printf("enter value of y");
    scanf("%d", &y);
    printf("value of y = %d \n",y);
    x = y;
    printf("%d \n",x);

    return 0;
}