#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> ans){
    int s=0;
    int e=ans.size()-1;
    while(s<e){
        swap(ans[s++],ans[e--]);
    }
    cout<<"Sum is "<<endl;
    for(int i:ans){
        cout<<i<<" ";
    }
}

void sum(int arr1[] , int n , int arr2[] , int m){
    int i=n-1;
    int j=m-1;
    int carry = 0;
    vector<int> ans;
    int sum = 0;

while(i>=0 && j>=0){
    int val1 = arr1[i];
    int val2 = arr2[j];
     sum = val1 + val2+ carry;

     carry = sum/10;
     sum = sum%10;
     ans.push_back(sum);
i--;
j--;
}
//first case
while(i>=0){
    int sum = arr1[i] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
}
//second case
while(j>=0){
    int sum = arr2[j] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    j--;}
//third case
while(carry!=0){
    int sum = carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    }

         reverse(ans);
}

int main(){
    int arr1[20],arr2[20],n,m;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter array 1"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];

    }cout<<endl; 
    
    cout<<"Enter m \n";
    cin>>m;
    cout<<"Enter array 2"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];

    }cout<<endl; 

    sum(arr1,n,arr2,m);
    return 0;
}