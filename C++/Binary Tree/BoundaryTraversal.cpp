#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void traverseLeft(node *root, vector<int> &ans)
{
    // base case
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    ans.push_back(root->data);
    if (root->left)
    {
        traverseLeft(root->left, ans);
    }
    else
    {
        traverseLeft(root->right, ans);
    }
}

void traverseLeaf(node *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void traverseRight(node *root, vector<int> &ans)
{
    // base case
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
    {
        traverseRight(root->right, ans);
    }
    else
    {
        traverseRight(root->left, ans);
    }

    // print when returned
    ans.push_back(root->data);
}

vector<int> boundary(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    // print left side
    traverseLeft(root->left, ans);
    // print leaf nodes
    // left subtree
    traverseLeaf(root->left, ans);
    // right subtree
    traverseLeaf(root->right, ans);
    // print right side
    traverseRight(root->right, ans);

    return ans;
}

node *buildTree(node *root)
{
    cout << "Enter data " << endl;
    int d;
    cin >> d;
    root = new node(d);
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

int main()
{
    node *root = NULL;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    // creating binary tree
    root = buildTree(root);
    cout << "after boundary traversal" << endl;
    vector<int> ans = boundary(root);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}