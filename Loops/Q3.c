#include<stdio.h>
int main()
{
    int start,end, i,sum=0;
    printf("Enter the Starting & Ending :");
    scanf("%d%d",&start,&end);

    for ( i = start; i <=end; i++)
    {
        sum=sum+i;
         printf("sum= %d \n",sum);
    }
    printf("%d \n",sum);
    
    
}
