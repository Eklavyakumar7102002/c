#include<stdio.h>
int  sum(int a);

int main()
{
    int num, result;
     
    printf("Enter the number: \n");
    scanf("%d",&num);
    result = sum(num);
    printf("Sum of digits in %d is %d",num,result);
    return 0;
}
int sum(int num)
{
    if(num!=0)
    {
        return(num % 10 +sum (num/10));
    }
    else
    {
        return 0;
    }
}