// using stack

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interleave(queue<int> &q)
{
    stack<int> s;
    int n = q.size();
    for (int i = 0; i < n / 2; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
}

int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);
    q.push(35);
    q.push(40);
    q.push(45);
    q.push(50);

    interleave(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}