//to swap two variables without using third variable
#include<stdio.h>
int main()
{
    int a = 60, b = 20;
    
    a = a - b;
    b = a + b;
    a = b - a;
    
    printf("after swapping two variable: a = %d, b= %d", a, b);
    
    return 0;
}
