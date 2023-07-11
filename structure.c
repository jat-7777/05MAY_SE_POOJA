//wap to make the structure of class students report
#include<stdio.h>
struct getdata
{
    int x, y;
    char wz[100];
};
int main()
{
    struct getdata lol[5];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("enter the employee number: ");
        scanf("%d", &lol[i].x);
        printf("enter the employee name: ");
        scanf("%s", &lol[i].wz);
        printf("enter employees address: ");
        scanf("%s", &lol[i].wz);
        printf("enter employees age: ");
        scanf("%d", &lol[i].y);
    }
    printf("\n|employee no|\t|employee name|\t\t|employee adress|\t|employee age|\n");
    for(i = 0; i < 10; i++)
    {
        printf("_______________________________________________________________________________\n");
        printf("\n| %d |\t\t\t| %s |\t\t\t| %s |\t\t\t| %d |\n", lol[i].x, lol[i].wz, lol[i].wz, lol[i].y);
    }
    
    return 0;
}