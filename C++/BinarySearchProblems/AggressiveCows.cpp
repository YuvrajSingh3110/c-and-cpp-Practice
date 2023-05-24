// Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance. 

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m,int mid){
    int cowCount = 0;
    int lastPos = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==m){
                return true;
            }
            lastPos=arr[i];
        }

    }
    return false;
}

int cows(int arr[],int n,int m){
    int s=0;
    int maxi=-1;
    for(int i=0; i<n; i++){
       maxi = max(maxi,arr[i]);
    }
    int e=maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
         if(isPossible(arr,n,m,mid)){
             ans = mid;
             s = mid + 1;
         }
         else{
             e = mid - 1;
         }
         mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int m,arr[10]={1,2,3,4,6};
    cout<<"Enter number of cows \n";
    cin>>m;
    int c = cows(arr,5,m);
    cout<<c;
}