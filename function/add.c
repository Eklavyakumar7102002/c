#include<stdio.h>
int sum (int, int);
int main()
{
    int total , num ,nmu2;
    printf("\t Function: a simple two number are add \n");
    printf("Enter the number \n");
    scanf("%d",&num);
    scanf("%d",&nmu2);

    total = sum (num,nmu2);
    printf("The total  is : %d\n",total);
    return 0;
}

int sum (int num, int num2)
{
    int s;
    s=num+num2;
    return s;
}