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

    node* split(node* &head){
        node* slow = head;
        node* fast = head->next;
        
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }   
        return slow;
    }
    
    node* merge(node* &head, node* mid){
        node* result = NULL;
        if(head == NULL){
            return head;
        }
        if(mid == NULL){
            return mid;
        }
        if(head->data <= mid->data){
            result = head;
            result->next = merge(head->next, mid);
        }
        else{
            result = mid;
            result->next = merge(head, mid->next);
        }
        return result;
    }
    
    node* sort(node* &head){
        if(head == NULL || head->next == NULL){
            return;
        }
        
        node* s = split(head);
        node* mid = s->next;
        sort(head);
        sort(mid);
        node* fin = merge(head, mid);
        return fin;
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
    cout<<endl;
    sort(head);
    cout<<"after sorting"<<endl;
    // tail->next = head->next;
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    // if(floydDetect(head)){
    //     cout<<"cycle is present "<<endl;
    // }
    // else 
    // cout<<"no cycle "<<endl;
    // node* loop = startingPoint(head);
    // cout<<"loop starts at "<<loop->data<<endl;
    // removeLoop(head);
    print(head);
    //deleteNode(tail,head,3);
    //print(head); 
return 0;
}