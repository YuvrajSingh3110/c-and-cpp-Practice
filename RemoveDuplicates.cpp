//S.C. -> o(1) 

#include<iostream>
#include<vector>
using namespace std;

int remove(vector<int> &arr){
    int k=1;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i-1] != arr[i]){
            arr[k] = arr[i];
            k++;
        }
    }
    return k;    
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    int k = remove(arr);
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"k;
}