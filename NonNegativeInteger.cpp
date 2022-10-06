#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t > 0){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p = p*arr[i];
    }
    int cnt = 0;
    if(p < 0){
        cnt = 1;
    }
    cout<<cnt;
    t--;
    }
	return 0;
}
