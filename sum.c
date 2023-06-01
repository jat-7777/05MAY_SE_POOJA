#include <stdio.h>

int main() 
{
  int num1,num2,sum;
  printf("enter first number:");
  scanf("%d", &num1);
  printf("enter second number:");
  scanf("%d", &num2);
  printf("sum of the two number is: ");
  sum = num1 + num2;
  printf("%d + %d = %d", num1, num2, sum);
  
}
