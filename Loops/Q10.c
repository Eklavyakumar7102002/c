#include<stdio.h>
int main()
{
    int num, power;
    printf("Enter the Number and Power\n");
    scanf("%d%d",&num,&power);

    int result = 1;
    for (int i = 0; i < power; i++)
    {
       result = result * num;
    }
     printf("the result is %d \n",result);

     return 0;


}
