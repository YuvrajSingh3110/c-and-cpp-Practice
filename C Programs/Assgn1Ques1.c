#include<stdio.h>

void main(){
    int a,b;
    printf("Enter any 3 digit number \n");
    scanf("%d", &a);
    printf("Enter any 2 digit number \n");
    scanf("%d", &b);
    printf("Output ->\n");
  printf("%d\n*%d\n___\n", a,b);
  printf("%d\n",a*(b%10));
  printf("%dX\n___\n%d", a*(b/10), a * b);


}