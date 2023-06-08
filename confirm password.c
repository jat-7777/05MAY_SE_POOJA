//WAP to confirm password
#include<stdio.h>

int main() 
{
   int password;
   
   printf("enter your 6 digit password:");
   scanf("%d", &password);
   
   if(password == 123456)
   {printf("you are successfully loged in");}
   
   else 
   {printf("wrong password check it again");}
    return 0;
}