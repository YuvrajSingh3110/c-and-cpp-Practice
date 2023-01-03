#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int> p = make_pair("yato",3);
    m.insert(p);

    //2
    pair<string,int> p2("name",2);
    m.insert(p2);

    //3
    m["my"] = 1;
    m["my"] = 2;

    //search
    cout<<m["my"]<<endl;
    cout<<m.at("yato")<<endl;
    //cout<<m.at("yo")<<endl;
    cout<<m["yo"]<<endl;
    cout<<m.at("yo")<<endl;

    //size
    cout<<m.size()<<endl;

    //count
    cout<<m.count("name")<<endl;

    //erase
    m.erase("yo");
    cout<<m.size()<<endl;

    //iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}