#include<iostream>
using namespace std;

//compile time
class A{

    public:
    //function overloading
    void hello(){
        cout<<"hello"<<endl;
    }
    void hello(string name){
        cout<<"hello"<<endl;
    }  
};

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this-> a;  //obj1 (current object)
        int value2 = obj.a;  //obj2 (input)
        cout<<"output "<<value2 - value1<<endl;
    }
    void operator() (){
        cout<<"i am brakcet "<< this->a <<endl;
    }
};

//run time 
class Animal{
    public:
    void speak() {
        cout<<"speak"<<endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
};

int main(){

    Dog d;
    d.speak();

    /*
    A objA;
    //obj.hello();

    // B objB  ;
    // objB.a=1;
    // objB.b=2;
    // cout<<objB.add()<<endl;

    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1 + obj2; //this calls the operator+ func 

    obj1(); */
}