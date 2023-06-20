//WAP to convert years to days
#include<stdio.h>
int main()
{
    int days, years;
    
    printf("enter the number of years: ");
    scanf("%d", &years);
    
   days = years * 365;
    
    printf("number of days out of years are: %d", days);
    
    return 0;
}