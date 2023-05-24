#include<iostream>
using namespace std;
int main(){
  int n, R100, R50, R20;
  cout<<"Enter the amount "<<endl;
  cin>>n;
  switch( 1 ){
    case 1 : R100 = n/100;
             n = n%100;
             cout<<"Number of 100 rupee notes required are "<<R100<<endl;
    case 2 : R50 = n/50;
             n = n%50;
             cout<<"Number of 50 rupee notes required are "<<R50<<endl;
    case 3 : R20 = n/20;
             n = n%20;
             cout<<"Number of 20 rupee notes required are "<<R20<<endl;
    case 4 : cout<<"Number of 1 rupee coins required are "<<n;                           
  }

}