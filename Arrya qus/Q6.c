#include<stdio.h>
int main()
{
    int s1,s2,commomCount=0;
    printf("Enter The size of first Array :");
    scanf("%d",&s1);
    printf("Enter The size of Second Array :");
    scanf("%d",&s2);

    int arr1[s1],arr2[s2];
    int max=(s1>s2)?s1:s2;
    int arr3[max];
    printf("enter first array: \n");
    for (int i = 0; i < s1; i++)
    {
       scanf("%d",&arr1[i]);
    }
    printf("enter the second array : \n");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[commomCount]=arr1[i];
                commomCount++;
            }
            
        }
         
    } 
    printf("The common element are :\n");
        for (int i = 0; i < commomCount; i++)
        {
            printf("%d ,",arr3[i]);
        }  
        printf("\b ");
    return 0;
}