#include<stdio.h>
int main()
{
    float pi=3.14,radius,height,result;
    printf("enter the radius :");
    scanf("%f",&radius);
    
    printf("enter the height :");
    scanf("%f", &height);

    result=2*pi*radius*radius+2*pi*radius*height;

    printf("the surface area of cylinder %f \n",result);

    return 0;


}
