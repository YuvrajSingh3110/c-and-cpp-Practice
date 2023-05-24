#include<iostream>
using namespace std;

int main(){
    int n,arr[10];
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter unsorted array \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool swapped = false;

for(int i=1; i<n; i++){
    // For round 1 to n-1
           for (int j = 0; j<n-i; j++)
           { // Process element till n-1 th index
               if(arr[j]>arr[j+1]){
                               swap(arr[j],arr[j+1]);
                               swapped = true;


               }
               
           }
           if(swapped == false){
               cout<<"Already sorted \n";
                   break;
               }
            
}
cout<<"sorted array is \n";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
            return 0;
}