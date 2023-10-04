#include<stdio.h>
int main()
{
    int max,min,arr[5];
    printf("enter 5 elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    min=arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min) 
        {
            min=arr[i];
        }
    }
    printf(" min = %d \n",min);
    printf(" max = %d \n",max);
    return 0;
}