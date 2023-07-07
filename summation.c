//WAP to print the summation of the number
#include<stdio.h>
int main()
{
    int sum =0, no, r;
    printf("enter the number: ");
    scanf("%d", &no);
    while(no>0)
    {
        //to do the sums of the particular number
        r = no % 10;
        sum = sum + r;
        no = no / 10;
    }
    printf("summation of the number is: %d", sum);
    return 0;
}