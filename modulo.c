//c program to find modulo
#include <stdio.h>

int main() 
{
    int number1, number2, product;
    
    printf("enter first number:");
    scanf("%d", &number1);
    
    printf("\nenter second number:");
    scanf("%d", &number2);
    
    product = number1%number2;
    printf("\ndivision of %d & %d = %d", number1, number2, product);
    
    return 0;
}
