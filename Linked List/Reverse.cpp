#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    //destructor
    ~node(){
        int value = this-> data;
        //memory free
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<<"memory is free of data: "<<value<<endl;
    }
};
    
    //inserting a new node at head
    void insertAtHead(node* &head, int d){
        //create a new node
        node* temp = new node(d);
        temp-> next = head; 
        head = temp;
    }

    //inserting a new node at tail
    void insertAtTail(node* tail, int d){
        node* temp = new node(d);
        tail->next = temp;
        tail = tail->next;
    }

    //insert at position
    void insertAtPosition(node* &tail, node* &head, int pos, int d){
         //insert at start
         if(pos == 1){
            insertAtHead(head, d);
            return;
         }
         node* temp = head;
         int cnt = 1;
         while(cnt < pos-1){
            temp=temp->next;
            cnt++;
         }
         //insert at tail
         if(temp->next == NULL){
            insertAtTail(tail, d);
            return;
         }
         //creating a node for d
         node* nodeToInsert = new node(d);
         nodeToInsert-> next = temp-> next;
         temp-> next = nodeToInsert;
    }

    //deleting a node
    void deleteNode(node* &head, node* &tail, int pos){
        //deleting head
        if(pos == 1){
            node* temp = head;
            head = head-> next;
            temp-> next = NULL;
            delete temp;
        }
        else{
            //deleting any middle or last node
            node* curr = head;
            node* prev = tail; 
            int cnt = 1;
            while(cnt < pos){
                prev = curr; //pointing prev to curr
                curr = curr-> next;
                cnt++;
            }
            prev-> next = curr-> next;
            curr-> next = NULL;
            delete curr;
        }
    }

    //printing linked list 
    void print(node* &head){
        //creating a temp node
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp-> next; //travelling from one node to another
        }
    }

    node* reverse(node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        node* prev =  NULL;
        node* curr = head;
        while(curr != NULL){
            node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

int main(){
    
    //creating a new node
    node* node1 = new node(10);
    //cout<<node1-> data<<endl;
    //cout<<node1-> next<<endl;

    //head pointed to node1
    node* head = node1;
    node* tail = node1;
    insertAtHead(head, 12);
    insertAtTail(tail, 13);
    insertAtPosition(tail,head,2,14);
    print(head); 
    cout<<"hehe"<<endl;
    //deleteNode(tail,head,3);
    cout<<"hrhr"<<endl;
    print(head); 
    cout<<endl;
    reverse(head);
    print(head);
return 0;
}