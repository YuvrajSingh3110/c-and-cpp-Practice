#include<stdio.h>

void main(){
    int A[30],B[30],C[60];
    int m,n;
   
    printf("Enter number of elements in A: ");
    scanf("%d", &m);
    printf("Enter sorted array A: ");
    for(int i=0; i<m; i++){
    scanf("%d", &A[i]);
           C[i] = A[i];

    }
    int a=m;
    printf("Enter number of elements in B: ");
    scanf("%d", &n);
    printf("Enter sorted array B: ");
    for(int i=0; i<n; i++){
    scanf("%d", &B[i]);
         C[a] = B[i];
         a++;

    }

    for(int i=1; i<m+n; i++){
    // For round 1 to n-1
    int temp;
           for (int j = 0; j<(m+n)-i; j++)
           { // Process element till n-1 th index
               if(C[j]>C[j+1]){
                  temp = C[j];
                  C[j] = C[j+1];
                  C[j+1] = temp;           
               }
            }
            
    }
   
    printf("Array C is: ");
    for(int i=0; i<m+n; i++){
    printf("%d ", C[i]);
    }

}
