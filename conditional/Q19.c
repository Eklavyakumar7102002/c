#include<stdio.h>
int main()
{
    int conu,conid;
    float chg, surchg,netamt,gramt;
    char connm;

    printf("Input the Customer ID :");
    scanf("%d",&conid);
    printf("Input the Customer Name :\n");
    scanf("%c",connm);
    printf("Input the Unit consumed by the Customer :");
    scanf("%d",&conu);

    if (conu<200)
    {
        chg=1.20; /*printf("1.20 per unit");*/
    }
    else if (conu>=200 && conu<400)
    {
        chg=1.50; /*printf("1.50 per unit");*/
    }
    else if (conu>=400 && conu<600)
    {
        chg=1.80; /* printf("1.80 per unit");*/
    }
    else
    {
        chg=2.00; /*printf("2.00 per unit");*/
    }
     gramt=conu*chg;
     if (gramt>300);
     surchg = gramt*15/100.0;
     netamt=gramt+surchg;
     if (netamt <100);
     netamt=100;
     printf("\nElectricity Bill\n");
     printf("Customer IDNO                       :%d\n",conid);
    printf("Customer Name                       :%c\n",connm);
    printf("unit Consumed                       :%d\n",conu);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
    printf("Surchage Amount                     :%8.2f\n",surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

    
    
}