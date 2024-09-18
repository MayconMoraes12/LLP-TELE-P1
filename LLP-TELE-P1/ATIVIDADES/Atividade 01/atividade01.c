#include <stdio.h>

int main(void) {
  int x=10;
  if(x>=0 && x<=10)
  {
    printf("insuficiente");
  }
  else if (x>10 &&x<=40) 
  {
    printf("suficiente");
  }
  else if (x>40 &&x<=70)
  {
    printf ("bom");
  }
  else if (x>70 &&x<=90)
  {
    printf ("otimo");
  }
  else if (x>90 &&x<=100)
  {
    printf("excelente");
  }
  return 0;
}