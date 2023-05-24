#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
int s=0, e= n-1;
int mid = (s+e)/2;

while(s<=e){
    if(arr[mid] == key)
    return mid;
    else 
    return -1;

if(key<arr[mid]){
    e = mid-1;
    }

else 
s = mid+1;
mid = (s+e)/2;
}
return 0;

}

int main(){
    int arr[20],n,key;
    cout<<"enter n "<<endl;
    cin>>n;
    cout<<"enter array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the number to be found "<<endl;
    cin>>key;

int r = search(arr, n, key);
if(r!=-1)
cout<<"number is present at index "<<r<<endl;
else 
cout<<"number is not present ";

return 0;
}