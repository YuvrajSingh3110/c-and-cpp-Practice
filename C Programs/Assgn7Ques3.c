#include<stdio.h>

void main(){  
    int i=1;
    while(i<=4){
        int j=1;
        int space = 1;
        while(space <= 4-i){
            printf("  ");
            space++;
        }
        while(j<=i){
            printf("%d ", j);
            j++;
        }
        j=i-1;
        while(j>=1){
            printf("%d ", j);
            j--;
        }
        printf("\n");
        i++;
    }

printf("\n");

int k=1;
while(k<=4){
    int j=1;
    while(j<=k){
        printf("%d ",k);
        j++;
    }
    printf("\n");
    k++;
}

}
