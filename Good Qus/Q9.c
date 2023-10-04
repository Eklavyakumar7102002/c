#include<stdio.h>
int main()
{
    int i, n=2,a,prime=0;
    printf("Enter the Number \n");
    scanf("%d",&i);
    while (n<i)
    {
        if (i%n==0)
        {
            prime++;
        }
        n++;
        
    }
    if (prime==0)
    {
        printf("\nThis is prime Number");
    }
    else
    {
        printf("\nThis is Not Prime Number");
    }
    return 0;
    
}