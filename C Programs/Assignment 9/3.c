#include<stdio.h>
#include<string.h>

int main (){
    char s[100];
    printf("Enter the string: ");
    gets(s);
    int l=strlen(s);
    char p[l];
    for (int i = 0; i<=l; i++)
    {
      p[i] = s[l-i-1];
    }  
      printf("reverse of string %s",p);
 return 0;   
}