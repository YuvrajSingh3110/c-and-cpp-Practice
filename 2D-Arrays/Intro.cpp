#include<iostream>
using namespace std;

bool search(int arr[][3], int k, int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==k){
                return 1;
            }
        }
        
    }
    return 0;
    
}

int main(){
     int arr[4][3];
     int k;
//   int arr[4][3]={{1,11,111,}, {2,22,222,}, {3,33,333,}, {4,44,444,}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"Enter number to be found ";
    cin>>k;

    if(search(arr,k,4,3)){
        cout<<"number is present ";
    }
    else
    {
        cout<<"number is not present ";
    }
    return 0;
    
}