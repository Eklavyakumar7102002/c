#include<stdio.h>
int fact(int num);

int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    int result = fact(num);
    printf("the factorial of %d \n");
    return 0;
}
int fact(int num)
{
    if(num==0 || num==1)
    return 1;
    else
     return num * fact(num - 1);
}