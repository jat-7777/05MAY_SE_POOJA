//to find odd or even with ternery operator
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number a: ");
    scanf("%d", &a);
    
    (a % 2 == 0) ? (printf("a is an even number")) :
                   (printf("a is an odd number"));
    return 0;
}
