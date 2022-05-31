#include<iostream>
using namespace std;

bool search(int arr[], int key, int n){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else 
    {
      bool remaining = search(arr+1,2 ,n-1);
      return remaining;
    }
    return false;

}

int main(){
    int arr[5]={1,2,3,4,5};
    int key =2;
    bool ans = search(arr,key,5);
    if(ans){
        cout<<"element found";
    }
    return 0;
}