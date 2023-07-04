//WAP to find vowel or constant using switch case
#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter any alphabet: ");
    scanf("%c", &alphabet);
    
    switch(alphabet)
    {
        case 'a':
        printf("vowel\n");
        break;
        case 'e':
        printf("vowel\n");
        break;
        case 'i':
        printf("vowel\n");
        break;
        case 'o':
        printf("vowel\n");
        break;
        case 'u':
        printf("vowel\n");
        break;
        default:
        printf("consonant");
        
    }
    
    return 0;
}
