#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter the x and y coordinate : \n");
    scanf("%d%d",&X ,&Y);

    if (X >0 && Y >0)
    {
       printf("first coordinate");
    }
    else if (X >0 && Y <0)
    {
        printf("second coordinate");
    }
    else if (X <0 && Y <0)
    {
        printf(" third coordinate");
    }
    else if (X<0 && Y>0)
    {
        printf("Fourth coordinate");
    }
    else
    {
        printf("coordinate in line");
    }
    
    return 0;
}