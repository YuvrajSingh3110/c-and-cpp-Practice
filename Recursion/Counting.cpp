#include<iostream>
using namespace std;

int counting(int n){
    if (n==0)
    {
        return 1;
    }

   // counting(n-1);   //head recursion

    cout<<n<<" ";   

    counting(n-1);   //tail recursion
    
    //both will have DIFF output
}

int main(){
    int n;
    cin>>n;
    counting(n);

}