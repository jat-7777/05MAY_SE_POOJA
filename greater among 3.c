
//WAP to find the largest value aming three number
#include<stdio.h>

int main()
{
     
    int num1, num2, num3;
    printf("enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    //one number shold be greater than another 2
    if(num1 > num2 && num1 > num3)
    printf("num1 is greater than num2 and num3.", num1);
    
    if(num2 > num1 && num2 > num3)
    printf("num2 is greater than num1 ad num3.", num2);
    
    if(num3 > num1 && num3 > num2)
    printf("num3 is greater than num1 and num2.", num3);
    
    return 0;
}