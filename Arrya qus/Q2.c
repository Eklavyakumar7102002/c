#include<stdio.h>
int main()
{
    int Number[10]; 
    int i;
    int smallest;
    printf("Enter the Value : \n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&Number[i]);
    }
    smallest=Number[0];
    for ( i = 0; i < 10; i++)
    {
        if (Number[i]<smallest)
        {
            smallest=Number[i];
        }
        
    }
    printf("Smallest of the Number is %d ", smallest);
    
    
}