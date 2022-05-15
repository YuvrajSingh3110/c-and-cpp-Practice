#include<stdio.h>

void main(){
    int n,a, arr[20];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d", &a);
    //binary search
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid]==a){
            printf("element found at index %d\n", mid);

        }
        if(arr[mid]>a){
            e=mid-1;
        }
        else
        {s=mid+1;}
        mid=(s+e)/2;
    }
    
}