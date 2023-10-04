#include<stdio.h>
int main()
{
    int custid;
    float unit,amount,surcharge;

    printf("Enter the unit :\n");
    scanf("%f",&unit);
// ........................................Logic of Unit...................................................
    if (unit>=0 && unit<200)
    {
      amount=unit*1.20; 
    }
    if (unit>=200 && unit<400)
    {
      amount=unit*1.50; 
    }
    if (unit>=400 && unit<600)
    {
      amount=unit*1.80; 
    }
    if (unit>=600)
    {
      amount=unit*2.00; 
    }
    else
    {
        printf("Invalid Unit \n");
    }
//..........................................Logic of Amount.................................................
      if (amount<200)
      {
        amount=200;
      }
      if (amount>=400)
      {
        surcharge=amount*0.15;
        printf("Unit price : %.2f && Surcharge : %.2f\n",amount,surcharge);
        amount=surcharge+amount;
      } 
      printf("Net amount = %.2f",amount);
      return 0;     
        
}