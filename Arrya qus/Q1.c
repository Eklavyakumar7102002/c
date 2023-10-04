 #include <stdio.h>
  int main() 
{
    int Number[10];
    int i;
    int greatest;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &Number[i]);
    }
     greatest = Number[0];
      for (i = 0; i < 10; i++) {
        if (Number[i] > greatest)
       {
        greatest =Number[i];
       }
    }
    printf("Greatest of ten numbers is %d ", greatest);
    return 0;
}
