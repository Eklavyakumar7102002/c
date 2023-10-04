#include<stdio.h>
int main()
{
    float miles , kilometer;
    printf("enter the miles :");
    scanf("%f",&miles);

    kilometer= 1.609*miles;

    printf("miles convert to kilometer is %f \n", kilometer);
    return 0;

}