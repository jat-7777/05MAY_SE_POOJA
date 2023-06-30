//WAP to print te pattern
#include<stdio.h>
int main()
{
    int a = 5;
    int i, j;
    for(i = 0; i < a; i++)
    {
       for(j = 0; j <= i; j++)
       {
           printf("%d", j + 1);
       }
       printf("\n");
    }  
        return 0;
}