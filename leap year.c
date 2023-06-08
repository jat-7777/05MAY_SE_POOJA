// to find rhe leap year
#include <stdio.h>

int main() 
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    
    //leap year can be divided by 4
    if(year % 4 == 0)
    {printf("%d is a leap year.", year);}
    
    else{printf("%d is not a leap year", year);}
    
    return 0;
}