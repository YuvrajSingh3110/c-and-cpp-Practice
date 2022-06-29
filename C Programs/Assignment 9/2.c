#include<stdio.h>
#include<string.h>

int main(){
   char s[100];
   int k=0;
   printf("Enter the string: ");
   gets(s);
   int l=strlen(s);
   for (int i = 0; i < l; i++)
   {
      if (s[i]!=s[l-i-1])
       {
           k=1;
         break;
       }
   }
       if (k == 1)
       {
           printf("%s string is not palindrome",s);
       }
            else {
          printf("%s string is palindrome",s);
        } 
 return 0;   
}