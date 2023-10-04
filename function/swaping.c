#include<stdio.h>
void swap(int *, int *);
int main()
{
    int n1,n2;
    printf("Enter the 1st number\n");
    scanf("%d",&n1);
    printf("Enter the 2st number\n");
    scanf("%d",&n2);
    
    printf("Befor swaping : n1 = %d, n2 = %d \n\n",n1,n2);
    swap(&n1,&n2);

    printf("After sawping : n1 = %d, n2 = %d \n\n",n1,n2);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}      
