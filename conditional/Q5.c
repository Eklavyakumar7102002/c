#include<stdio.h>
int main()
{
    int age;
    printf("Enter you age :");
    scanf("%d",&age);

    if (age>=18)
    {
        printf(" is eligible for vote");
    }
    else
    {
        printf("not eligible for vote");
    }
    
    return 0;

}