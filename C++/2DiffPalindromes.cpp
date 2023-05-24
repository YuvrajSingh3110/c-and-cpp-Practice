#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t > 0){
    int a,b;
    cin>>a>>b;
    if((a % 2 == 0 && b % 2 == 0) || 
    (a % 2 == 0 && b % 2 == 1) ||
    (a % 2 == 1 && b % 2 == 0)
    )
    cout<<"yes";
    else
    cout<<"no";
    t--;
    }
    return 0;
}