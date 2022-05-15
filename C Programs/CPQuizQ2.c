#include<stdio.h>

void main(){
    int r,s,t;
    printf("Enter how much rice you want in kg \n");
    scanf("%d", &r);
    printf("Enter how much sugar you want in kg \n");
    scanf("%d", &s);
    printf("Enter how much tea you want in kg \n");
    scanf("%d", &t);
    float total = r*80.3 + s*50 + t*500.34;
    printf("total amount is: %f", total);


}