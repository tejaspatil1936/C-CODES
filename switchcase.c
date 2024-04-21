//write a code in c to read a single digit number and print all numbers till 0

#include <stdio.h>

int main() {
int num;
printf("Enter a single digit number: ");
scanf("%d", &num);
switch (num) {
case 0:
printf("0");
break;
case 1:
printf("1,0");
break;
case 2:
printf("2,1,0");
break;
case 3:
printf("3,2,1,0");
break;
case 4:
printf("4,3,2,1,0");
break;
case 5:
printf("5,4,3,2,1,0");
break;
case 6:
printf("6,5,4,3,2,1,0");
break;
case 7:
printf("7,6,5,4,3,2,1,0");
break;
case 8:
printf("8,7,6,5,4,3,2,1,0");
break;
case 9:
printf("9,6,7,6,5,4,3,2,1,0");
break;
default:
printf("Invalid input");
}
return 0;
}
