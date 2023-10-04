#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature state below :");
    scanf("%d",&temp);

    if (temp<0)
    {
       printf("Freezing weather \n");
    }
    else if (temp>=0 && temp<=10)
    {
       printf("Very Cold weathe \n");
    }
    else if (temp>10 && temp<=20)
    {
        printf(" Cold weather \n");
    }
    else if (temp>20 && temp<=30)
    {
        printf("Normal in Temperature \n");
    }
    else if (temp>30 && temp<40)
    {
        printf("Its Hot \n");
    }
    else if (temp>=40)
    {
        printf("Its Very Hot \n");
    }
    
    return 0;
}