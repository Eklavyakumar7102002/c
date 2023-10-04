#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the m Value :");
    scanf("%d",&m);

    if (m>0)
    {
        n=1;
        printf("n=%d \n",n);
    }
    else if (m<0)
    {
        n=-1;
        printf("n=%d \n",n);
    }
    else
    {
        n=0;
        printf("n=%d \n",n);
    }

    return 0;
    
    

}