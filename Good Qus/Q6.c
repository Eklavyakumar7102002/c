#include<stdio.h>
int main ()
{
    int num,sum=0,rem;
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    while (num>0)
    {
        rem=num%10;
        if (rem%2==0)
        {
            sum=rem+sum;
        }
        num=num/10;

       
    }
    printf("%d Sum of Even Number ",sum);
    

}