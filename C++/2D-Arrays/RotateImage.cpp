#include<iostream>
using namespace std;

void rotate(int arr[][5], int n, int m){
    
}

int main(){
    int n,m;
    cout<<"Enter number of rows and columns \n";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    rotate(arr,n,m);

return 0;
}    