//WAP to print fibonacci series
#include<stdio.h>
int main()
{
    int a, n;
    int v1 = 0, v2 = 1;
    int nextvalue = v1 + v2;
    
    printf("enter the number: ");
    scanf("%d", &n);
    
    printf("fibonacci series is as shown: %d, %d", v1 , v2);
    
    for(a=3; a<=n; a++)
    {
        printf("%d, ", nextvalue);
        v1 = v2;
        v2 = nextvalue;
        nextvalue = v1 + v2;
    }
    
    return 0;
}