#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="Akshita";
    m[4]="Jiya";
    m[8]="Sanyam";
    m.insert({5,"Yuvraj"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<m.count(5)<<endl;
    m.erase(5);
for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it=m.find(4);
    for (auto i = it; i!=m.end(); i++)
    {
        cout<<(*i).first<<" ";
    }
    
return 0;
}