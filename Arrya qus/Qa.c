//#include<stdio.h>
//int main()
//{
//    int a=10,b=20,c;
//    c=a;
//    a=b;
//    b=c;
//    printf("%d %d",a,b);
//    
//
//}
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a :\n");
    scanf("%d",&a);
    printf("Enter the b :\n");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}

