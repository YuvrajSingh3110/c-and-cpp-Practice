#include<iostream>
using namespace std;

int findUnique(int *arr, int n){
    int temp = 0;
    for(int i=0; i<n; i++){
        temp = temp ^ arr[i];
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr,n);
    return 0;
}