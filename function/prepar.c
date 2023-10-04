#include<stdio.h>
void add();
int main()
{
    printf("befor calling in main \n");
    add();
    add();
    add();
    add();
    printf("After calling in main \n");
    return 0;
}
void add()
{
    printf("hii i am add somethink \n");
}