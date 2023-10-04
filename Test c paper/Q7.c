#include <stdio.h>
#include<math.h>
int main() {
    int num, temp, remainder, result = 0,sum=0;
    printf("Enter a integer: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) 
    {
       // remainder = temp % 10;
       // 
       //result += remainder * remainder * remainder;
       //temp /= 10;
       temp=temp/10;
       result++;
    }
    temp=num;
    while (temp>0)
    {
        remainder=temp%10;
        sum=sum+pow(remainder,result);
        temp=temp/10;
    }
    

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}