/* C Program to Count capitalcase, Smallcase, and Special Characters in String */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;
    int capital=0,Small=0,special=0,numeric;
    printf("Please enter the string \n");
    // getch(str);
    
    // For capitalcase
    for(i=0; str[i] != '\0'; i++)
    {
            if(str[i]>='A' && str[i]<='Z') 
            {
                capital++;
            }
    
       // For Smallcase
       else if(str[i]>='a' && str[i]<='z') 
       { 
               Small++;
        }
       // for numeric
       else if(str[i]>='1' && str[i]<='9') 
       { 
            numeric++;
       }
      // For special
        else
       {
           special++;
        }
    }
         printf("\ncapital case letters: %d",capital);
         printf("\nSmall case letters: %d",Small);
         printf("\nSpecial characters: %d",special);
         printf("\nNumeric : %d",numeric);
         getch();
         return 0;
}