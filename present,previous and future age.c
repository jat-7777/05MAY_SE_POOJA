
//using the operator
#include <stdio.h>
int main()
{
   int age;
   
 //to find my present, previous and further age
 
   printf("my present age in 2023 is: ");
   scanf("%d", &age);

   printf("\nmy age in 2022 was: ");
   printf("--age=%d", --age);
   
   printf("\nmy age in 2024 will be: ");
   printf("++age=%d", ++age);
   
    return 0;
}