#include<stdio.h>

int main(){
    int a=0, b=1;
    int i=0,n;
    printf("Enter the length of fibonacci series: ");
    scanf("%d", &n);
    printf("%d %d ", a,b);
    do{
        int temp = a+b;
        printf("%d ", temp);
        a=b;
        b=temp;
        i++;
    }while(i<n-2);
   
    return 0;
 }