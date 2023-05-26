#include<iostream>
#include<vector>
using namespace std;

#define mod 1000000007;

int solve(int n, int i, vector<int> &dp){  //recursion + memoisation method
    if(dp[i] != -1){
        return dp[i];
    }
    //base case
    if(i == n){
        return 1;
    }
    if(i > n){
        return 0;
    }
    
    return dp[i] = (solve(n,i+1,dp) + solve(n,i+2,dp))%mod;
}

// int solve2(int n){  //tabulation method
// vector<int> dp(n+1);
// dp[0] = 0;
// dp[1] = 1;
// for (int i = 0; i < n; i++)
// {
//     dp[i] = dp[i-1] + dp[i-2];
// }
// return dp[n-1]%mod;
// }

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1);
    for (int i = 0; i <= n+1; i++)
    {
        dp[i] = -1;
    }
    cout<<solve(n,0,dp)<<endl;
    cout<<solve2(n)<<endl;
    return 0;
}
