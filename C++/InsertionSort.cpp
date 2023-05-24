#include<iostream>
using namespace std;


int main(){
    int n,arr[10];
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter Array \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {int j;
int temp = arr[i];
for (j = i-1; j>=0; j--)
{
if(arr[j]>temp){
arr[j+1]=arr[j];
}
else{
    break;
}} 
arr[j+1] = temp;

    }
    
cout<<"sorted array is \n";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }

 return 0;   
}