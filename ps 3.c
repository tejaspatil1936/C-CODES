//write a programme to read two nos and exchange their values using 3rd variable
#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    return 0;
}