#include<iostream>
using namespace std;

class node{
  public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter data "<<endl;
    int d;
    cin>>d;
    root = new node(d);
    if(d== -1){
        return NULL;
    }
    
    cout<<"Enter data for left part "<<d<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data for right part "<<d<<endl;
    root -> right = buildTree(root -> right);
    return root;
}

void postorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
    
}

int main(){
    node* root = NULL;

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //creating binary tree
    root = buildTree(root);

    cout<<"preorder traversal is "<<endl;
    postorder(root);

    return 0;
}