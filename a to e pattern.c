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
           printf("%c", 'A' + j);
       }
       printf("\n");
    }  
        return 0;
}