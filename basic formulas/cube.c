#include<stdio.h>

int main()
{
    float side , result;
    printf("enter the side :");
    scanf("%f",&side);

    result= side*side*side;
    printf("volume of cube %f \n ",result);

    return 0;
}