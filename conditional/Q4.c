#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year ;");
    scanf("%d",&year);

    if (year%400==0)
    {
        printf("leap year \n");
    }
    else if (year%100==0)
    {
        printf("not leap year \n");
    }
    else if (year%4==0)
    {
        printf("leap year \n");
    }

    else
    {
        printf("not leap year \n");
    }
    return 0;
        
    
}