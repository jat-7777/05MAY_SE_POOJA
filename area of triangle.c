//WAP to find the area of triangle
#include<stdio.h>
int main()
{
    float length, breadth, area;
    
    printf("enter the value of length: ");
    scanf("%f", &length);
    
    printf("enter the value of breadth: ");
    scanf("%f", &breadth);
    
    area = (length * breadth) / 2;
    
    printf("area of triangle: %f", area);
    
    return 0;
}