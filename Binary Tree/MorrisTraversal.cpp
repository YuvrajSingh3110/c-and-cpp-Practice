#include <iostream>
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

Node *buildTree(Node *root)
{
    cout << "Enter data " << endl;
    int d;
    cin >> d;
    root = new Node(d);
    if (d == -1)
    {
        return NULL;
    }

    cout << "Enter data for left part " << d << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right part " << d << endl;
    root->right = buildTree(root->right);
    return root;
}

void morrisTraversal(Node* &root){
    if(root == NULL){
        return;
    }
    Node* curr = root;
    Node* pre = NULL;

    while(curr != NULL){
        if(curr -> left == NULL){
            cout<<curr -> data<<" ";
            curr = curr -> right;
        }
        else{
            //find the inorder predecessor of current
            pre = curr -> left;
            while(pre -> right != NULL && pre -> right != curr){
                pre = pre -> right;
            }
                //temporary link created
                //make curr as the right child of its inorder predecessor
                if(pre -> right == NULL){
                    pre -> right = curr;
                    curr = curr -> left;
                }
                //link removed
                //revert the changes
                else{
                    pre -> right = NULL;
                    cout<<curr -> data<<" ";
                    curr = curr -> right;
                }
            }
        }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    morrisTraversal(root);
    return 0;
}
