#include<iostream>
using namespace std;

int search(int arr[][3], int n, int m, int k){
    int s=0;
    int e=n*m-1;
    int mid=s+(e-s)/2;

    while(s<e){
        int element = arr[mid/m][mid%m];

        if(element == k){
            return 1;
        }
        if(element<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
  
}

int main(){
     int arr[3][3];
     int k;
    cout<<"Enter the elements "<<endl;
      for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elment to be found "<<endl;
    cin>>k;
    cout<<search(arr,3,3,k);
    return 0;
}