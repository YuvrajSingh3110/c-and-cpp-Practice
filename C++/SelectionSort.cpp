#include<iostream>
using namespace std;

int main(){
    int n,arr[10];
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter unsorted array \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
for(int i=0; i<n-1; i++){
           int minIndex = i;
           for (int j = i+1; j < n; j++)
           {
               if(arr[j]<arr[i]){
                   minIndex = j;
               }
               swap(arr[minIndex],arr[i]);
           }
            
}
cout<<"sorted array is \n";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
            return 0;
}