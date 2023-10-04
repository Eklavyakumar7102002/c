#include<stdio.h>
int main()
{
    for (int row = 5; row>=0; row--)
    {
        for (int s = 0; s <row; s++)
        {
            printf(" ");
        }
        
        for (int col = 5; col >row; col--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}

