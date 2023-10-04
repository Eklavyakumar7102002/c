#include<stdio.h>

int main()
{
    float base, height, result;
    printf("enter the base :");
    scanf("%f",&base);
    printf("enter the height :");
    scanf("%f",&height);

    result=1.0/3.0*base*height;

    printf(" the volume of triangle is %f \n",result);
    return 0;
}