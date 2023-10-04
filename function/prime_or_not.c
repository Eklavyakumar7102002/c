#include<stdio.h>
int PrimeOrNot(int);
int main()
{
    int n1,prime;

    printf("Input a positive number \n");
    scanf("%d",&n1);
    prime = PrimeOrNot(n1);
    if (prime==1)
    
        printf("The Number %d is a prime Number.\n",n1);
        // cout<<"The number "<<n1<<" is a prime no. \n";
    
    else
    
        printf("The Number %d is a Not Prime Number.\n",n1);
    return 0;
}
int PrimeOrNot(int n1)
{
    int i=2;
    while (i<n1/2)
    {
        if (n1%i==0)
            return 0;
        else
          i++;
    }
    return 1;
    
}