
#include<stdio.h>
int main()
{
    int num1,num2,num3;
     printf("enter three variables : \n");
     scanf("%d%d%d",&num1,&num2,&num3);


    if (num1 > num2 && num1 > num3)
    {
        printf("%d greatest \n",num1);
    }
    else if (num2 > num3 && num2>num1)
    {
        printf("%d greatest \n",num2);
    }
    else
    {
        printf("%d is greatest \n",num3);
    }
    
    


    return 0;
}