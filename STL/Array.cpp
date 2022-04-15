#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
    cout<<"size of array is "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"empty or not -> "<<a.empty()<<endl;    //empty() returns boolean
    cout<<"element at 2nd pos "<<a.at(1)<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    return 0;
}

//time complexity = O(1)