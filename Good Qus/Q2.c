#include <stdio.h>
int main()
 {
  int term1=0,term2=1,term3,last;
  printf("Enter the Last Range\n");
  scanf("%d",&last);
  
  printf("%d %d",term1,term2);

  for (int i = 0; i < last; i++)
  {
    term3=term1+term2;
    printf(" %d ",term3);
    term1=term2;
    term2=term3;
  }
  

  return 0;
}