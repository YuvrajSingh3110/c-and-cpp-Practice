#include<iostream>
using namespace std;

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
    int q,X,Y;
    cout<<"Enter the number of queries\n";
    cin>>q;
    for (int i = 0; i < q; i++)
    {int sum = 0;
        cout<<"Enter X and Y\n";
        cin>>X>>Y;
        for (int j = 0; j < X; j++)
        {
            for (int k = 0; k < Y; k++)
            {
                sum+=arr[j][k];
            }
            
        }
        cout<<sum<<endl;
        
    }
    
return 0;
    
}