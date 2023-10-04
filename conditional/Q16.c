#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
     if (num>=65 && num<=90)
     {
        printf("captail alphabet \n");
     }
     else if (num>=97 && num<=122)
     {
        printf("Small alphabet \n");
     }
     else if (num>=48 && num<=57)
     {
        printf("Number \n");
     }
     else
     {
        printf(" special character \n");
     }
     return 0;
}