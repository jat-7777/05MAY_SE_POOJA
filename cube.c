//WAP to find cube of the number
#include<stdio.h>

int main() 
{
  int num, cube;
  printf("enter the number:");
  scanf("%d", &num);
  
  cube = num * num * num;
  printf("cube of the %d is = %d", num, cube);
  
  return 0;

}

