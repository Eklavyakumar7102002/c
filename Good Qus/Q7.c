#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter the number :");
    scanf("%d",&num);

    while (num>0)
    {
       rem=num%10;
       if (rem%2!=0)
       {
           sum=rem+sum;
       }
       num=num/10;
       
    }
    printf(" sum of Odd Number is %d ",sum);
}