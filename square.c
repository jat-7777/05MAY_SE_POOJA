//WAP to find square of the number
#include<stdio.h>

int main() 
{
  int num, square;
  printf("enter the number:");
  scanf("%d", &num);
  
  square = num * num;
  printf("square of the %d is = %d", num, square);
  
  return 0;

}
