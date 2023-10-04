#include<stdio.h>

int main()
{
    char name[10];
    printf("Enter your Name: \n");

    for (int i = 0; i < 8; i++)
    {
        scanf("%c",&name);
        fflush(stdin);

    }
     printf("-------------------------------\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%c",name[i]);
    }
    

    return 0;
}
    
