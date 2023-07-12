//wap to make the union of class students report
#include<stdio.h>
union get
{
    int xy;
    char wz[50];
};
int main()
{
    union get lol[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("enter your id: ");
        scanf("%d", &lol[i].xy);
        printf("enter your name: ");
        scanf("%s", &lol[i].wz);
    }  
    
    printf("\n|id|\t\t\t\t|name|\n");
    for(i = 0; i < 2; i++)
    {
        printf("\n******************************************************************\n");
        printf("\n| %d |\t\t| %s |\n", lol[i].xy, lol[i].wz);
    }
    return 0;
}