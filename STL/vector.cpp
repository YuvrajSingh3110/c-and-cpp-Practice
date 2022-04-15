#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);
    // vector<int> last(a);
    
    cout<<"print a \n";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
        cout<<"capacity-> "<<v.capacity()<<endl;

         v.push_back(2);
        cout<<"capacity-> "<<v.capacity()<<endl;

         v.push_back(3);
        cout<<"capacity-> "<<v.capacity()<<endl;
        cout<<"size-> "<<v.size()<<endl;

    cout<<"element at index 2 -"<<v.at(2)<<endl;
cout<<"1st element "<<v.front()<<endl;
cout<<"last element "<<v.back()<<endl;

v.pop_back();
cout<<"after pop back \n";
for(int i:v){
    cout<<i<<endl;
}
cout<<"before clear size and capacity-> "<<v.size()<<" "<<v.capacity()<<endl;
v.clear();
cout<<"after clear size and capacity-> "<<v.size()<<" "<<v.capacity()<<endl;
return 0;
}

