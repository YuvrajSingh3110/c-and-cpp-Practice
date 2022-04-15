#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int a=5,b=4;
    cout<<max(a,b)<<" "<<min(a,b)<<endl;

    string s = "abcd";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}