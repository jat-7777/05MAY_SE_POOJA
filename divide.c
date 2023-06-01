//to divide two numbers
#include <stdio.h>

int main() 
{
  int num1,num2,divide;
  printf("enter first number:");
  scanf("%d", &num1);
  printf("enter second number:");
  scanf("%d", &num2);
  printf("division of two numbers is:  ");
  divide = num1 / num2;
  printf("%d / %d = %d", num1, num2, divide);
    
}
