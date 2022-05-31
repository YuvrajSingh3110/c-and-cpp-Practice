#include<iostream>
using namespace std;

int sum(int arr[], int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remaining =  sum(arr+1,n-1);
    int ans = arr[0] + remaining;
   
    return ans;
}

int main(){
    int arr[10]={2,4,5,6};

    int ans = sum(arr,4);
    
        cout<<"sum is "<<ans<<endl;
    
    return 0;
}