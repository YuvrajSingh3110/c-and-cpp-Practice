#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
       return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a<b){
            b=b-a;
        }
        if(a>b){
            a=a-b;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"enter the numbers "<<endl;
    cin>>a>>b;

    cout<<"gcd/hcf is "<<gcd(a,b);

}