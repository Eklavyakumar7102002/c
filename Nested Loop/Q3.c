#include<stdio.h>
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 5; col > row; col--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}