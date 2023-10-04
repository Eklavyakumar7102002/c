#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Enter the Number :");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
       rem=num%10;
       sum=sum+rem*rem*rem;
       num=num/10;
    }
    if (sum==temp)
    {
       printf("%d is armstrong number\n",temp);
    }
    else
    {
        printf("%d is Not armstrong number\n",temp);
    }
    

    
}