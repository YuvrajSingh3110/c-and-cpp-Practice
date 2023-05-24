#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Akshita");
    s.push("jiya");
    s.push("Sanyam");
    s.push("Yuvraj");

    cout<<"first element "<<s.top()<<endl;

    s.pop();
        cout<<"first element after pop is "<<s.top()<<endl;
    

    return 0;
}