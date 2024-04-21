#include <stdio.h>

int main() {
  float a,b;
  char operator;

  printf("Enter the operator : ");
  scanf("%c", &operator);

  printf("Enter two numbers: ");
  scanf("%f %f", &a, &b);

  switch (operator) {
    case '+':
      printf("%f",a+b);
      break;
    case '-':
      printf("%f",a-b);
      break;
    case '*':
      printf("%f",a*b);
      break;
    case '/':
      if (b == 0) 
      {
        printf("number Cannot be divided by zero");
      } 
      else 
      {
        printf("%f",a/b);
      }
      break;
    default:
      printf("Error: Invalid operator");
  }

  return 0;
}
