#include<iostream>
#include<vector>
using namespace std;

    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //exclude
        solve(nums, output, i++, ans);
        
        //include
        int element = nums[i];
        output.push_back(element);
        solve(nums, output, i+1, ans);
        
    }
    int main(){
        vector<int> nums(1,2,3);
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        solve(nums, output, i, ans);
        for(int i:ans,int j: ans){
            cout<<i<<" "<<j<<" ";
        }
    
}