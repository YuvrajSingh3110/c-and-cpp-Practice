#include<iostream>
using namespace std;

int mountain(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2; 

    while(s<e){
        if(arr[mid]>arr[mid+1]){
            return arr[s];
        }
        else if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else 
        {e = mid - 1;}
        mid = s+ (e-s)/2;
    }
    return s;

}

int main(){
int arr[10]={1,2,5,6,2,1};
cout<<"Mountain element is "<<mountain(arr, 6)<<endl;
return 0;
}