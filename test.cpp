#include<iostream>
using namespace std;

int solve(int arr1[], int arr2[], int n, int k){
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr1[i] == k){
            return k;
        }
}
}

int main(){
    int n,k;
    cout<<"enter N"<<endl;
    cin>>n;
    cout<<"enter k"<<endl;
    cin>>k;
    int arr1[n];
    int arr2[n];
    cout<<"enter prices of container of each fuel catagory"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"enter volume of container of each fuel catagory"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    solve(arr1,arr2,n,k);

}