#include<iostream>
using namespace std;

int main(){
    int arr[10],n;
    cout<<"enter n "<<endl;
    cin>>n;
    cout<<"enter array in o and 1 only "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

//sorting using 2 pointer approach

    for(int i=0,j=(n-1); i<j; i++,j--){
        if(arr[i]==0)
       { i++;}
        if(arr[j]==1)
       { j--;}
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        cout<<"sorted array "<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}