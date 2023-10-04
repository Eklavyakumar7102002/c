#include<stdio.h>

int main()
{
    float celsius, fahrenheit ;
    printf("enter the fahrenheit :");
    scanf("%f",&fahrenheit);

    celsius= (fahrenheit-32)*5.0/9.0;
    printf("celsius %f \n ",celsius);

    return 0;
}