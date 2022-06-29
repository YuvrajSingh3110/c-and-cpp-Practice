#include<stdio.h>

void main(){
    int n;
    printf("Enter height of pascal's triangle: ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        int space = 1;
        while(space <= n-i){
            printf("  ");
            space++;
        }
        for(int j=0; j<=i; j++){
            if(j==i || i==0 || j==0){
                printf("%d   ",arr[i][j]=1);
            }
            else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                printf("%d   ", arr[i][j]);
            }
        }
        printf("\n");
    }
}