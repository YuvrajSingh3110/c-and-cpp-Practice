#include<iostream>
using namespace std;

int main(){
    int arr[20],n;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }cout<<endl;

for(int s=0,e=n-1 ; s<=e ; s++,e--){
    swap(arr[s],arr[e]);
}
for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}