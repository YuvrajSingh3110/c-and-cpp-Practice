#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr,int n,int k){
    deque<int> max(k);
    deque<int> min(k);
    for (int i = 0; i < k; i++)
    {
        //adding of first k size window
    while(!max.empty() && arr[max.back()] <= arr[i])
    {
        max.pop_back();  
    }
    while (!min.empty() && arr[min.back()] >= arr[i])
    {
        min.pop_back();
    }
    max.push_back(i);
    min.push_back(i);
    }
    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[max.front()] + arr[min.front()];
        //next window

        //removal
        while(!max.empty() && i - max.front() >= k){
            max.pop_front();
        }
        while(!min.empty() && i - min.front() >= k){
            min.pop_front();
        }

    
    //addition
    while(!max.empty() && arr[max.back()] <= arr[i])
    {
        max.pop_back();
    }
    while(!min.empty() && arr[min.back()] >= arr[i])
    {
        min.pop_back();
    }
    max.push_back(i);
    min.push_back(i);
    }
    //make sure to consider last window
    ans += arr[max.front()] + arr[min.front()];

    return ans;
}

int main(){
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,4)<<endl;
}