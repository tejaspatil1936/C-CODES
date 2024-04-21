#include <stdio.h>
int takenum()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    return n;
}
int main() {
    int c;
    c = takenum();
    printf("the number is %d",c);
    return 0;
}