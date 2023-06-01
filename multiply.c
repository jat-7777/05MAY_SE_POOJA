//to multiply two numbers #include <stdio.h>

int main() 
{
  int num1,num2,multiply;
  printf("enter first number:");
  scanf("%d", &num1);
  printf("enter second number:");
  scanf("%d", &num2);
  printf("multiplication of two numbers is:  ");
  multiply = num1 * num2;
  printf("%d * %d = %d", num1, num2, multiply);
    
}
