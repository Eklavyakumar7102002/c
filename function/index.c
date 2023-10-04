// #include<stdio.h>
// #define MAX 100

// int findIndex(int []);
// int n;
// int main()
// {
//     int arr1[MAX],num,i;
//     printf("\n\n Function : get largest element of an array :\n");
// 	printf("-------------------------------------------------\n");

//     printf("Enter the number of element to be stor in array \n");
//     scanf("%d",n);

//     printf("input %d element in the array : \n",n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("element - %d :" ,i);
//         scanf("%d",&arr1[i]);
//     }
//     num=findIndex(arr1);

//      printf(" The largest element in the array is : %d\n\n",num);
//      return 0;
// }
// int findIndex(int arr1[])
// {
//     int i=1,num;
//     num=arr1[0];
//     while (i<n)
//     {
//        if (num<arr1[i])
//        num=arr1[i];
//        i++; 
//     }
//     return num;
    
// }
#include<stdio.h>
#define MAX 100

int findMaxElem(int []);
int n;

int main()
{
    int arr1[MAX],mxelem,i;
	printf("\n\n Function : get largest element of an array :\n");
	printf("-------------------------------------------------\n"); 

       printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    mxelem=findMaxElem(arr1);

    printf(" The largest element in the array is : %d\n\n",mxelem);
    return 0;
}
int findMaxElem(int arr1[])
{
    int i=1,mxelem;
    mxelem=arr1[0];
    while(i < n)
	{
      if(mxelem<arr1[i])
           mxelem=arr1[i];
      i++;
    }
    return mxelem;
}