#include<stdio.h>
int main()
{
    int i,num,even=0,odd=0;
    printf("Enter the Number :");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
       if (i % 2 == 0)
         even=even+i;

        else
           odd=odd+i;
    }
    printf("sum of all even number = %d\n",even);
    printf("sum of all odd number = %d\n",odd);
    

    return 0;
    
}
