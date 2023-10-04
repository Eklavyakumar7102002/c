#include<stdio.h>
int main()
{
    float maths, physics, chemistry, total;
    printf("Enter the 3 subjects marks \n");
    scanf("%f%f%f",&maths,&physics,&chemistry);

    if (maths>=65 && physics>=55 && chemistry>=50)
    {
        if ( (maths+physics+chemistry) >=190 || (maths+physics) >=140)
        {
            printf("The candidate is eligible for admission in JEE");
        }
        else
        {
            printf("The candidate is not eligible for admission");
        }
        
    }
    else
    {
        printf("The candidate is not eligible for admission in B.Sc");
    }
    return 0;
    
}