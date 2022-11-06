#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int cnt=0;
    int pivot=arr[s];
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //placing pivot at right position
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //for left and right part
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(arr[i]>pivot && arr[j]<pivot){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    return pivotIndex;
}

void quicksort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"After sorting "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}