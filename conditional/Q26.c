#include<stdio.h>
int main()
{
    int num1 , num2, opt;
    printf("Enter the First Number :");
    scanf("%d",&num1);
    printf("Enter the Second Number :");
    scanf("%d",&num2);

       printf("\nInput your Option :\n");
       printf("1-Addition .\n 2-Substraction .\n 3-Multiplication .\n");
       scanf("%d",&opt);
       switch (opt)
       {
       case 1:
          printf("The Addition of %d and %d is: %d\n", num1,num2 , num1+num2);
        break;
           case 2:
          printf("The Substraction of %d and %d is: %d\n", num1,num2 , num1-num2);
        break;
           case 3:
          printf("The Multiplication of %d and %d is: %d\n", num1,num2 , num1*num2);
        break;

       default:
           printf("Input correct option\n");
        break;
       }
}
