#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

// void solve(vector<int> &nums, vector<int> &output, int i, vector<vector<int>> &ans){
//     if(i>=nums.size()){
//         ans.push_back(output);
//         return ;
//     }
//     //exclude
//     solve(nums, output, i++, ans);

//     //include
//     int element = nums[i];
//     output.push_back(element);
//     solve(nums, output, i+1, ans);

// }

void solve(int index, vector<int> &nums, vector<int> &res, vector<vector<int>> &ans)
{
    ans.push_back(res);
    if (index == nums.size())
    {
        res.pop_back();
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        if (i != index && nums[i] == nums[i - 1])
        {
            continue;
        }
        res.push_back(nums[i]);
        solve(index + 1, nums, res, ans);
        res.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> res;
    solve(0, nums, res, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int i = 0;
    ans = subsetsWithDup(nums);
    //solve(i, nums, output, ans);

    cout << "The unique subsets are " << endl;
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "]";
    }
    cout << " ]";
    return 0;
}