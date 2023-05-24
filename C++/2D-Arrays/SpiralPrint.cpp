#include<iostream>
#include<vector>
using namespace std;

int spiral(int arr[][3], int row, int col){
    int cnt = 0;
    int total = row*col;
    int ans[3][3]={0};
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

    while(cnt<total){
        for (int i = startingCol; i <= endingCol; i++)
        {
            // ans[i][i]=arr[startingRow,i];
        }
        
          
    }

}

int main(){
    int arr[3][3];
    cout<<"Enter the elements "<<endl;
      for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    spiral(arr,3,3);
    return 0;

}