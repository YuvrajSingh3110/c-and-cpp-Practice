#include<iostream>
using namespace std;

bool search(int arr[],int s, int e, int key){
  
   int mid = s + (e-s)/2;
  
   if(s>e){
       return false;
   }
    if(arr[mid]==key){
       return true;
   }
   
  

   if(arr[mid]<key){
       search(arr,mid+1,e,key);
   }
   if(arr[mid]>key){
       search(arr,s,mid-1,key);
   }
  
   return false;

}

int main(){
    int arr[5]={1,2,3,4,5};
    int key =2;
    bool ans = search(arr,0,5,key);
    if(ans){
        cout<<"element found";
    }
    return 0;
}