//WAP to swap the 3 variables
#include<stdio.h>
int main()
{
   int a=22, b=33, c;
   
 //swapping 3 variables
  printf("\nbefore swappimg the value a is:%d and b is:%d", a, b);
 
  c=a;
  a=b;
  b=c;
  
  printf("\nafter swappimg the value a:%d and b is:%d and c is:%d", a, b, c);

    return 0;
}