  #include<stdio.h>
int main()
{
      int a,i,sum=0;
      float average;
      printf("Enter the 10 Number :\n");
      for ( i = 1; i <=10; i++)
      {
         printf("Number- %d :",i );
         scanf("%d",&a);
         sum=sum+a;
        
      }
       average=sum/(i-1.0);
	     printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,average);

}

/*#include<stdio.h>
int main()
{
    int s,e,i,sum=0;
    float avg;
    printf("Enter the Start & End Value :\n");
    scanf("%d%d",&s,&e);

    for ( i = s; i <=e; i++)
    {
        printf("sum= %d + %d =",sum,i);
        sum= sum+i;
        printf(" %d \n",sum);
    }
    {
    avg=sum/(i-1.0);
    }
    printf("Avg %.1f \n",avg);
}*/
