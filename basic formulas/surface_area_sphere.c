#include<stdio.h>

int main()
{
    float pi=3.14,radius,result;
    printf("enter the radius :");
    scanf("%f",&radius);

    result=4*pi*radius*radius;

     printf("the surface area of sphere %f \n",result);
    return 0;
}