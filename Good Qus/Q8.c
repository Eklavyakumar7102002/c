#include<stdio.h>
int main()
{
    int a,n,d, tn,sum=0;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the Total number in this A P :");
    scanf("%d",&n);
    printf("Enter the Common Difference :");
    scanf("%d",&d);

    tn=a+(n-1)*d;
     for(int i = a; i <= tn; i = i + d)
    {
        sum+=i;
        if(i != sum)
            printf("%d ", i);
        else
            printf("%d = %d + ", i,sum);
    }
    printf("\n");
    return 0;
    
}