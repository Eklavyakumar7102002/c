#include<stdio.h>

int main()
{
    float radius,pi=3.14,h,result;
	printf("enter the radius :");
    scanf("%f",&radius);
    printf("enter the h :");
    scanf("%f",&h);

    result=1.0/3.0*pi*radius*radius*h;

    printf("the volume of cone is %f \n",result);
    return 0;
}
