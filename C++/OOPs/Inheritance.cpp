#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"sleeping"<<endl; 
    }
};

int main(){
    Male m;
    m.age = 45; 
    cout<<m.age<<endl; 

return 0;
}