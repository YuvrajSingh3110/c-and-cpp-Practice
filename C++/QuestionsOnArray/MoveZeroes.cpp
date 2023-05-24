#include<iostream>
using namespace std;

void move(int arr[], int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    
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

    move(arr,n);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
return 0;
    
}