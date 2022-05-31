#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
cout<<"Enter the number: ";
cin>>n;
// int bn=0;
// int number=0;
// int i=0;
// while(n!=0){
//     int rem=n%2;
//     // int bit=n&1;
//     bn+=rem*(pow(10,i));
   
//     n=n>>1;
//     i++;
// }
 for (int i = 10; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
// cout<<bn;
return 0;
}