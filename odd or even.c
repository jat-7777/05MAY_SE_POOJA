// to check the number is odd or even
#include <stdio.h>

int main() 
{
    int a;
    printf("enter thr number a: ");
    scanf("%d", &a); 
    
    //the number should be divisible by 2
    if(a % 2 == 0)
    { printf("%d is an even number", a); }
    
    else
    { printf("%d is an odd number", a); }
    
    return 0;
}