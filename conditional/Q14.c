#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 side : \n");
    scanf("%d%d%d",&a,&b,&c);

    if (a==b && b==c && c==a)
    {
        printf("triangle is Equilateral \n");
    }
    else if (a==b || b==c || c==a)
    {
       printf("triangle is  Isosceles \n");
    }
    else
    {
        printf("trinagle is Scalene \n");
    }

    return 0;
    
}