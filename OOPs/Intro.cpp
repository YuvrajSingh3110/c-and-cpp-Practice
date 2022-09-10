#include<iostream>
using namespace std;

class Hero{
public:
    int health;

    char level;
    static int timeToComplete;
    // void print(){
    //     cout<<level<<endl;
    // }


    Hero(){
        cout<<"contructor called"<<endl;
    }

    //parameterised constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health = health;
    }

    //copy constructor
    Hero(Hero& temp){ //pass by reference to avoid infinte loop caused by copying of values
    this->health = temp.health;
    cout<<health;

    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }

    //static function
    static int random(){
        return timeToComplete;
    }

    //destructor
    ~ Hero(){
        cout<<"destructor is called"<<endl;
    }
};
int Hero :: timeToComplete = 5;

int main(){
   
   cout<<Hero::timeToComplete<<endl;
   cout<<Hero::random()<<endl;
   
    //creating object
    //static allocation
  //  Hero a(30);
  //  cout<<"address of a "<<&a<<endl;
//Hero *b = new Hero;
//delete b;
   // Hero r(a);    

/*
    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    
    cout<<"health is: "<<(*b).health<<endl;  //b is address so we use dereference operator
    cout<<"level is: "<<(*b).level<<endl;
    cout<<"level is: "<<b->level<<endl;


    // John.health=60;
    // John.level='B';
    // cout<<"size of John: "<<sizeof(John)<<endl;

    // cout<<"health is: "<<John.health<<endl;
    // cout<<"level is: "<<John.level<<endl;
    */
}