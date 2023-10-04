#include<stdio.h>
int main()
{
    int num,count=0,rem;
    printf("Enter the Number :");
    scanf("%d",&num);

    while (num>0)
    {
        rem=num%10;
        if (rem%2==0)
        {
            count++;
        }
        num=num/10;
        
    }
    printf("%d is a even number\n ",count);
    
}