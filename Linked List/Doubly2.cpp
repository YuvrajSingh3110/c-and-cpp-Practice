#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructor
   ~node(){
    int val = this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"deleted node is "<<val<<endl;
   }
};

 void print(node* &head){
        //creating a temp node
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp-> next; //travelling from one node to another
        }
        cout<<endl;
    }


    void insertAtHead(node* &head, int d){
        if(head == NULL){
            node* temp = new node(d);
            temp=head;
        }
        else{
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
        }
    }

    void insertAtTail(node* &tail, int d){
        if(tail == NULL){
            node* temp = new node(d);
            temp=tail;
        }
        else{
        node* temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        }
    }
     void insertAtPosition(node* &tail,node* head, int pos, int d){
        if(pos == 1){
            insertAtHead(head, d);
            return;
        }
        node* temp = head;
        int cnt=1;
        while(cnt < pos-1){
            temp = temp->next;
            cnt++;
        }
        if(temp->next == NULL){
            insertAtTail(tail,d);
            return;
        }
        node* nodeToInsert = new node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        nodeToInsert->prev = temp;
        temp->next = nodeToInsert;

    }

int main(){
    node* node1 = new node(20);
    node* head = node1;
    node* tail = node1;
    int n,num,pos1,pos2;
    char op;
    
    if(op == 'D'){
        print(head);
    }
    if(op == 'S'){
        cin>>pos1>>pos2;
    }
    cin>>n;
    while(n >= 0){
    cin>>op;
    if(op == 'I'){
        cin>>num;
    }
    n--;
    }
}