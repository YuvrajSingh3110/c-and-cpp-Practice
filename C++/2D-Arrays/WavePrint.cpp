#include<iostream>
#include<vector>
using namespace std;

int wave(int arr[][3], int row, int col){
    for (int i = 0; i < col; i++)
    {
        if(col&1){
            //odd -> bottom to top
            for (int j = row-1; j>=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }cout<<endl;
        }
            else
            {
                //even -> top to bottom
                for (int j = 0; j < row; j++)
                {
                    cout<<arr[j][i]<<" ";
                }cout<<endl;
                
            
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
    wave(arr,3,3);
    return 0;

 }