#include<iostream>
using namespace std;

int search(int arr[10], int n){
    int a;
    cout<<"enter the number to be found "<<endl;
    cin>>a;
for(int i=0; i<n; i++){
    if(arr[i]==a)
    return 0;
    else
    return 1;
}
return 2;
}

int main(){
    int arr[10],n;
    cout<<"enter n "<<endl;
    cin>>n;
    cout<<"enter array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
int r = search(arr,n);
if(r==0)
cout<<"number is present ";
else if(r==1)
cout<<"number is not present ";
return 0;
}