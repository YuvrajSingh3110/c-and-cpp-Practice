#include<stdio.h>

void main(){

  for (int i = 1; i <=4; i++)
  {
      for (int j = 1; j <= i-1; j++)
      {
          printf("  ");
      }
      for (int k = 1; k <= 5-i; k++)
      {
          printf("%d ", k*2-1);
      }
      for (int k = 4-i; k > 0; k--)
      {
          printf("%d ", k*2-1);
      }
      printf("\n");     
  }
  
}