//logical operator testing
#include<stdio.h>

int main()
{

    int a=44, b=90, c=77, d=100;
    
    //to check and function
    if(a > 30 && b < 100)
    printf("\nits true");
    
    else
    printf("\nits false");
    
    //to check or function
    if(c > 77 || d <= 77)
    printf("\nits true");
    
    else
    printf("\nits false");
    
    //to check not function
    if(!(a == 44 && d != 99))
    printf("\nits true");
    
    else
    printf("\nits false");
    
    return 0;
}