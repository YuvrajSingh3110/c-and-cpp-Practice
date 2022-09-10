#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
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

 void print(node* &tail){
        //creating a temp node
        node* temp = tail;
        do{ //using do-while loop so that loop iterates atleast 1 time in case if a single node 
            cout<<tail->data<<" ";
            tail = tail-> next; //travelling from one node to another
        }while(tail->next!=temp);
        cout<<endl;
    }
 
void insertNode(node* &tail,int element, int d){
    //empty list
    if(tail==NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        node* curr=tail;

        while(curr->data != element){
            curr=curr->next;
        }
        //element found -> curr is representing element waala node
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(node* &tail, int val){
    if(tail==NULL){
        cout<<"tail is empty";
        return;
    }
    //assuming that value is present in the linked list
    node* prev = tail;
    node* curr = prev->next;
    while(curr->data != val){
        prev = curr;
        curr=curr->next;
    }
    prev->next = curr->next;
    //for 1 node only
    if(curr == prev){
        tail = NULL;
    }
    if(tail == curr){
        tail = prev;
    }
    curr->next=NULL;
    delete curr;
}

node* split(node* head){
    node* temp = head;
    int cnt=0;
    while(temp->next != head){
        temp = temp->next;
        cnt++;
    }
    int mid = cnt/2;
    int pos = 1;
    node* curr = head;
    while(pos < mid){
        curr = curr->next;
        pos++;
    }
    node* next = curr->next;
    temp->next = curr->next;
    curr->next = head;
    print(head);
    cout<<endl;
    print(next);
}

int main(){
    node* tail = NULL;
    insertNode(tail,3,5);
    insertNode(tail,5,6);
    insertNode(tail,6,9);
    insertNode(tail,9,10);
    print(tail); 
    // deleteNode(tail,9);
    // print(tail);
    split(tail);
}