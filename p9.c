// wap to read a name and print hello(name)

#include <stdio.h>
int main() {
    char name[100];

    printf("enter your name: ");
    scanf("%s", name);

    printf("Hello %s!\n", name);

    return 0;
}
