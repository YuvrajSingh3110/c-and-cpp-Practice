#include<stdio.h>

void main(){
    int arr[50];
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
       
   for(int i=1; i<n; i++){
    // For round 1 to n-1
    int temp;
           for (int j = 0; j<n-i; j++)
           { // Process element till n-1 th index
               if(arr[j]>arr[j+1]){
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;           
               }
            }
            
    }
    printf("Sorted array is: \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}