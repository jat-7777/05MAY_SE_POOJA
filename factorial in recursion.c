//WAP to find factorial of no.
#include<stdio.h>
int fect(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fect(n - 1);
}   
int main()
{
    int no;
    printf("enter the  number: ");
    scanf("%d", &no);
    printf("factorial of the number is: %d", fect(no) );
    return 0;
}

