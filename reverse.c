#include<stdio.h>
int main()
{
    int num, remainder;
    printf("enter any number: ");
    scanf("%d", &num);

    while(num>0)
    {
        remainder = num % 10;
        num = num/10;
        printf( "%d", remainder);
        
    }
    return 0;
}
