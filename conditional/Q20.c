#include<stdio.h>
int main()
{
    char grd;
     printf("Enter the Grade : ");
     scanf("%c",&grd);

     switch (grd)
     {
     case 'E':printf("Excellent");
        break;
        case 'V': printf("Very Good");
        break;
        case 'G': printf("Good");
        break; 
        case 'A': printf("Average");
        break;
         case 'F': printf("Fail");
        break;
     default:
          printf("invalid Grand found");
        break;
     }
     return 0;
      
      
      
      
      
}