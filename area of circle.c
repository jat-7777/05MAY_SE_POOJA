//WAP to find area of circle
#include<stdio.h>
int main()
{
    float pie=3.14;
    int radius;
    
    printf("enter the value of radius: ");
    scanf("%d", &radius);
    
    float area = (float) (pie * radius * radius);
    
    printf("area of circle: %f", area);
    
    return 0;
}
