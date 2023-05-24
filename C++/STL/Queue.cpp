#include<iostream>
#include<queue>
using namespace std;

int main(){
    // queue<string> q;

    // q.push("Akshita");
    // q.push("jiya");
    // q.push("Sanyam");
    // q.push("Yuvraj");

    // cout<<"first element "<<q.front()<<endl;

    // q.pop();
    //     cout<<"first element after pop is "<<q.front()<<endl;
    

    //max heap
    priority_queue<int> max;

    //min heap
    priority_queue<int , vector<int> , greater<int> > min;

    max.push(3);
    max.push(1);  
    max.push(0);
    max.push(5);

    min.push(3);
    min.push(1);  
    min.push(0);
    min.push(5);
 
 int n = max.size();
 int m = min.size();

 for (int i = 0; i < n; i++)
 {
     cout<<max.top()<<" ";
     max.pop();

 }cout<<endl;

  for (int i = 0; i < m; i++)
 {
     cout<<min.top()<<" ";
     min.pop();

 }cout<<endl;
 

    return 0;
}