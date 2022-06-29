#include<stdio.h>
#include<string.h>

int main(){
    char ch[100],wd[20];
    int cnt=0;
    printf("Enter the string: ");
    gets(ch);
    printf("Enter the word: ");
    gets(wd);

    int m = strlen(ch);
    int n = strlen(wd);
    for(int i=0; i<= (m-n); i++){
        int found = 1;
        for(int j=0; j<n; j++){
        if (ch[i+j] != wd[j])
        {
            found = 0;
            break;
        }
    }
    if(found == 1){
        cnt++;
      }    
    }
    printf("Occurence of the word is %d",cnt);
    return 0;
}