#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* bst(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root -> data){
        root -> right = bst(root -> right, d);
    }
    else{
        root -> left = bst(root -> left, d);
    }
    return root;
}


void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // separator used to separate levels

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // prev level is completely traversed
            cout << endl;
            if (!q.empty())
            { // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void buildTree(Node* &root)
{
    int d;
    cin>>d;
    while(d != -1){
        root = bst(root, d);
        cin>>d;
    }
    cout<<"data inserted"<<endl;
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

Node* delNode(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        //0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        else if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        //2 child
        if(root -> left != NULL && root -> right != NULL){
            //can be done either right or left part
            int mini = minVal(root -> right) -> data;
            root -> data  = mini;
            root -> right = delNode(root -> right, mini);
            return root;
        }
    }
    else if(root -> data > val){
        root -> left = delNode(root -> left, val);
        return root;
    }
    else{
        root -> right = delNode(root -> right, val);
        return root;
    }
}

int main(){
    Node* root = NULL; 
    cout<<"enter data for bst"<<endl;
    buildTree(root);
    cout<<"printing the tree"<<endl;
    levelOrderTraversal(root);
    cout<<"min value is "<<minVal(root) -> data<<endl;
    cout<<"max value is "<<maxVal(root) -> data<<endl;

    return 0;
}