#include<stdio.h>

int main()
{
    float pi,radius,hight,result;
    printf("enter the radius :");
    scanf("%f",&radius);
    printf("enter the hight :");
    scanf("%f",&hight);

    result=3.14*radius*radius*hight;

    printf("volume of cylinder is %f \n",result);

    return 0;
}