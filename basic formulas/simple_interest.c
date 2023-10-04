#include<stdio.h>

int main()
{
    float princpal, intrast, time, result;
    printf("enter the princpal :");
    scanf("%f",&princpal);

    printf("enter the intrast :");
    scanf("%f",&intrast);
    
    printf("enter the time :");
    scanf("%f",&time);

    result=princpal*intrast*time/100.0;

    printf("the simple interest is %f \n", result);
    return 0;
    
}