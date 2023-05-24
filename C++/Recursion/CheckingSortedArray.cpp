#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    sorted(arr+1,n-1);
    return true;
}

int main(){
    int arr[10]={2,4,5,6};

    int ans = sorted(arr,4);
    if(ans){
        cout<<"array is sorted "<<endl;
    }
    return 0;
}