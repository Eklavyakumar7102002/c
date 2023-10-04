#include<stdio.h>
int main()
{
    int intg,a ,i;
    printf("Enter The Value :");
    scanf("%d",&intg);

    for ( i = 1; i <=10; i++)
    {
        a=i*intg;
         printf("  %d X %d = %d \n",i,intg,a);
    }
    
}