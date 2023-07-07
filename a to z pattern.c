//wap to print the pattern
#include<stdio.h>
int main()
{
    int a = 7, i, j;
    char n = 'A';
    
    for(i = 0; i < a; i++)
    {
        //to print the outer row
        for(j = 0; j <= i; j++)
        {
        //to print the inner alphabet    
        printf("%c", n++);
        }
        printf("\n");
    }
    return 0;
}
