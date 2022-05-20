#include<stdio.h>

void main(){

  char word[15];
  printf("Enter the string :\n");
  scanf("%s",word);

  printf("%.4s ",word);
  for (int i = 0; i < 10; i++)
  {
      printf("%c",word[i+4]);
  }
  printf("\n%.4s\n", word);
  for (int i = 0; i < 10; i++)
  {
      printf("%c", word[i+4]);
  }
  printf("\n%.1s.%c",word,word[4]);

}
