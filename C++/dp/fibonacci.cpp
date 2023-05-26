#include<iostream>
#include<vector>
using namespace std;

int fb(vector<int> &dp, int n){
    //base case
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1){
        //number already calculated
        return dp[n];
    }
    dp[n] = fb(dp,n-1) + fb(dp,n-2);
    return dp[n];
}

int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout<<fb(dp,n)<<endl;
    return 0;
}