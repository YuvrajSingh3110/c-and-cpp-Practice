#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void rev(queue<int> &q){
    int n = q.size();
    stack<int> s;
    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(20);

    rev(q);
    
    int n = q.size();
    while(!q.empty()){
        cout<<q.front()<<" "<<endl;
        q.pop();
    }
    
    return 0;
}
