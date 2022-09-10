#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"A"<<endl;
    }
   
};

class B{
    public:
    void func(){
        cout<<"B"<<endl;
    }
   
};


class C: public A, public B{
    public:
    string color;
};

int main(){ 
    C obj;
    obj.A::func();
    obj.B::func();


return 0;
}