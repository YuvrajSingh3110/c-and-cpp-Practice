// Problem Statement-> Given an array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students and the task is to allocate all the books to their students. Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to a student.
// 3. Book allocation should be in a contiguous manner.

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){

int studentCount = 1;
int pageSum = 0;
for(int i=0; i<n; i++){
    if(pageSum + arr[i] <= mid){
        pageSum += arr[i];
    }
    else{
    studentCount++;
    if(studentCount>m || arr[i]>mid){
        return false;
    }
    pageSum = arr[i];
    }
    if(studentCount>mid){
        return false;
    }
}
return true;
}

int book(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            cout<<"10 \n";
        s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int m,arr[10]={10, 20, 30, 40};
    cout<<"Enter number of students \n";
    cin>>m;
    int b = book(arr,4,m);
    cout<<b;

    return 0;
}