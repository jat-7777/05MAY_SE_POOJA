// c program to find simple interest
#include <stdio.h>

int main() 
{
    // to print the priciple, time, rate
    float principle, time, rate, SI;
    
    printf("enter the principle value:");
    scanf("%f", &principle);
    
    printf("enter the time value:");
    scanf("%f", &time );
    
    printf("enter the rate value:");
    scanf("%f", &rate);
    
    //calculate simple interest
    SI = (principle * time * rate) / 100;
    
    printf("simple interest=%f", SI);

    return 0;
}
