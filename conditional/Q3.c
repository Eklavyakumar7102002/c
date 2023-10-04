#include<stdio.h>

int main()
{
    int num1;
    printf("enter num1:");
    scanf("%d",&num1);

    if (num1<0)
    {
        printf("Negative number ");
    }
    else if (num1>0)
    {
        printf(" Positive Number");
    }
    else
    {
        printf("zero");
    }
    
    
return 0;

}