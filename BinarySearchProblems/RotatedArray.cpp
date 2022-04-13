#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int search(int arr[],int s,int e,int key){
int mid = s + (e-s)/2;
while(s<=e){
    if(arr[mid] == key){
    return mid;
    }
if(key<arr[mid]){
    e = mid-1;
    }

else {
s = mid+1;}
mid = s + (e-s)/2;
}
return -1;
}

int rotated(int arr[],int n,int p,int key){

    if(arr[p]<=arr[key] && arr[key]<=arr[n-1]){
       return search(arr, p, n-1, key);
    }
    else{
        return search(arr, 0,p-1, key);
    }
return 0;

}

int main(){
    int arr[10]={8,10,17,1,3};
int p = pivot(arr, 5);
int r = rotated(arr, 5,p, 17);
if(r==-1){
    cout<<"the number is not present";
}
else
cout<<"the number is present at "<<r<<" index";
return 0;
}