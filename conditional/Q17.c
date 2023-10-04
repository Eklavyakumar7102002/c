#include<stdio.h>
int main()
{
    char apl,num;
    printf("Enter the character :");
    scanf("%c",&apl);

    if (apl=='A'||apl=='E'||apl=='I'||apl=='O'||apl=='U'||apl=='a'||apl=='e'||apl=='i'||apl=='o'||apl=='u' )
    {
        printf("vowels \n");
    }
    else
    {
        printf("consonant \n");
    }
    return 0;
}