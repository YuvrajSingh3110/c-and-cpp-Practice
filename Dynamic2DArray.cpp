#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row;
    // cout<<"enter value of col 1 ";
    cin>>col;

    int** arr = new int* [row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int [col];  //making a 1D array having no of cols as size
       
    }
    //creation done  

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        //      cout<<"enter value of col for "<<i<<" row ";
        // cin>>col;
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        } cout<<endl;
        
    }

    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;
    
    
    
}