#include<stdio.h>
int main()
{
    int cp, sp, total;
     
     printf("Enter the Cost price :");
     scanf("%d",&cp);
    
    printf("Enter the selling price :");
    scanf("%d",&sp);

    if (sp>cp)
    {
       total=sp-cp;
       printf("\nYou can booked your profit amount : %d\n",total);
    }
    else if (cp>sp)
    {
        total=cp-sp;
        printf("\nYou got the loss the Amount : %d\n",total);
    }
    else
    {
        printf("\n no profit no loss . \n ");
    }
    
}