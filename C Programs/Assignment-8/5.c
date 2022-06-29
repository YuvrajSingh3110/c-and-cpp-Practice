#include<stdio.h>

void main(){
    char s[20];
    char s2[20];
    int length;
    printf("Enter the string: ");
    scanf("%s", &s);
    for (int i = 0; i < 20; i++)
    {
        if(s[i]=='\0'){
            length = i;
            break;
        }  
   } 
    printf("The length of the string is %d \n", length);
    for (int i = 0; i < sizeof(s); i++)
    {
        s2[i] = s[i];
    }

    printf("S2 string is %s ", s2);
}