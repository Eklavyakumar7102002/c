#include<stdio.h>
int main()
{
    int s,i,e,a;
    printf("enter value :\n");
    scanf("%d",&s);

    printf("Enter the range): ");
    scanf("%d", &e);

    for (i = 1; i <= e; ++i)
     {
        a=i*s;
    printf("%d * %d = %d \n", s, i,a);
     }
}