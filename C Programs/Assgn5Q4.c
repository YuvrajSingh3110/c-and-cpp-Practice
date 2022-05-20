#include<stdio.h>

void main(){
    char a;
    printf("Enter any character\n");
    scanf("%c", &a);

    if (a>=65 && a<=90) //uppercase
    {
        a = a^32;
        printf("Uppercase to lowercase %c", a);
    }
    else if (a>=97 && a<=122) //lowercase
    {
        a = a^32;
        printf("Lowercase to uppercase %c", a);
    }
    else 
    printf("Please enter character!!");
    
}