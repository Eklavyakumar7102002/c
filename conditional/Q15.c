#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the 3 sides :\n");
    scanf("%d%d%d",&side1,&side2,&side3);

    if (side1+side2+side3==180)
    {
        printf("this is triangle \n");
    }
    else
    {
        printf("Not a triangle \n");
    }
    return 0;
}