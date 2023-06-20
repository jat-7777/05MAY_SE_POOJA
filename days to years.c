//WAP to convert days to years
#include<stdio.h>
int main()
{
    int days;
    float years;
    
    printf("enter the number of days: ");
    scanf("%d", &days);
    
   years = days / 365;
    
    printf("number of years out of days are: %f", years);
    
    return 0;
}