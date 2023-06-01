//c program to find area of Rectangle
#include<stdio.h>
#include<conio.h>
 
int main() 
{
   int length, breadth, area;
 
   printf("Enter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("Enter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
   
   //calculate area of rectangle
   area = length * breadth;
   printf("Area of Rectangle : %d", area);
 
   return (0);
}