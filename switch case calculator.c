//c program to make the switch case calculator
#include<stdio.h>
int main()
{
    int m, n;
    char choice;
    printf("calculate two number: ");
    scanf("%d%c%d", &m, &choice, &n);
    switch(choice)
    {
        case '+':
        printf("addition of m and n is: %d", m + n);
        break;
        
        case '-':
        printf("substraction of m and n is: %d", m - n);
        break;
        
        case '*':
        printf("multiplication of m and n is: %d", m * n);
        break;
        
        case '/':
        printf("division of m and n is: %f", (float)m / (float)n);
        break;
        
        default:
        printf("invalid.....");
        break;

    }
    return 0;
}
