#include<iostream>
using namespace std;

// void update2(int &n){ pass by reference
//     n++;
// }

int& update2(int n){  //int& can also be used
   n++;
   int &ans=n;
   return ans;
}

void update1(int n){  //pass by value
    n++;
}

int main(){
    int i = 5;
    cout<<"before :"<<i<<endl;
    //update1(i);
    int ans=update2(i);
    cout<<"after :"<<ans<<endl;
}