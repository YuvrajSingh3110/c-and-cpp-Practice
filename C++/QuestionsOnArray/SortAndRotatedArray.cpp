#include<iostream>
using namespace std;

bool check(int arr[] , int n){
    int cnt = 0;
            for (int i = 1; i <= n; i++){
                if(arr[i-1]>arr[i]){
                    cnt++;
                }
            }
            if(arr[n-1]>arr[0]){
                cnt++;
            }
            return cnt<=1;
}

int main(){
    int arr[20],n;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }cout<<endl;  
    if(check(arr,n)){
        cout<<"Array is sorted and rotated "<<endl;

    }
    else
    cout<<"array is not sorted and rotated ";  
    return 0;
}