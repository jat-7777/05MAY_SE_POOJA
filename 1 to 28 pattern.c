//wap to print the pattern
#include<stdio.h>
int main()
{
    int a = 7, i, j;
    int n = 1;
    
    for(i = 0; i < a; i++)
    {
        //to print the outer row
        for(j = 0; j <= i; j++)
        {
        //to print the inner number 
        printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}
