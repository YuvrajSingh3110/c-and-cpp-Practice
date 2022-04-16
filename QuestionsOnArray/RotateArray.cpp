#include<iostream>
using namespace std;

void rotate(int arr[], int n , int k){
    int temp[n];
        for (int i = 0; i < n; i++){
            //shifting in a cyclic way
            temp[(i+k)%n] = arr[i];
        }
        for (int i = 0; i < n; i++){
            cout<<temp[i]<<" ";
        }
}

int main(){
    int arr[20],n,k;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }cout<<endl;  
 cout<<"enter key \n";
    cin>>k;
    rotate(arr,n,k);  
    return 0;
}