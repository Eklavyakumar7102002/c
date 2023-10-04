#include<stdio.h>
#include<math.h>
int main()
{
    float addx, subx, a, b, c;
    printf("enter the a,b,c");
    scanf("%d%d%d",&a,&b,&c);

    addx=( (-b) + sqrt(b*b -4*a*c))/2.0*a;

    subx=((-b)+ sqrt(b*b-4*a*c))/2.0*a;

    printf("sub x =%f \n",subx);
    printf("add x =%f \n",addx);

    if (subx>=0 && addx>=0)
    {
       printf("Both r real Number \n");
    }
    else if (subx<0 && addx<0)
    {
        printf("Both r Imaginory Number \n");
    }
    else
    {
        printf(" They are complex number \n There are no solution\n");
    }
    
      printf(" %f ",sqrt(625));
      float n1=sqrt(2);
      printf(" %f ",n1);

      float n2=pow(2,8);
      printf("%f",n2);
    

}