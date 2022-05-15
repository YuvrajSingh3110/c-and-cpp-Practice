#include<stdio.h>

void main(){
    int n, arr[20], cnt = 0;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {    //for round 1 to n-1
        for (int j = 0; j < n-i; i++)
        {   //process element till (n-1)th index
        int temp = 0;
           if (arr[j] > arr[j+1])
           {   cnt++;
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            //    printf("Swapped \n");
           }
           
            
        }
        
    }
    printf("Array is sorted in %d swaps\n", cnt);
    printf("Fisrt element : %d \n", arr[0]);
    printf("Last element : %d", arr[n-1]);
    
    
}