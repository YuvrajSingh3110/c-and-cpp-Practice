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

void convertToSortedDLL(node *root, node *&head)
{
    if (root == NULL)
        return;
    convertToSortedDLL(root->right, head);
    root->right = head;
    if (head != NULL)
    {
        head->left = root;
    }
    head = root;
    convertToSortedDLL(root->left, head);
}

node *mergeLL(node *head1, node *head2)
{
    node *head = NULL;
    node *tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        if (head == NULL)
        {
            head = head2;
            tail = head2;
            head2 = head2->right;
        }
        else
        {
            tail->right = head2;
            head2->left = tail;
            tail = head2;
            head2 = head2->right;
        }
    }
    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while (head2 != NULL)
    {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    return head;
}

int cntNodes(node *head)
{
    int cnt = 0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->right;
    }
    return cnt;
}

node *LLToBST(node *&head, int n)
{
    if (n <= 0 || head == NULL)
    {
        return NULL;
    }
    node *leftTree = LLToBST(head, n / 2);
    node *root = head;
    root->left = leftTree;
    head = head->right;
    root->right = LLToBST(head, n - (n / 2) - 1);
    return root;
}

node *mergeBST(node *root1, node *root2)
{
    /*
    //BST to inorder vector
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    //merge 2 sorted arrays
    vector<int> bst = merge(bst1, bst2);

    //inorder to bst
    return solve(bst, 0, bst.size()-1);
    */
    node *head1 = NULL;
    node *head2 = NULL;
    convertToSortedDLL(root1, head1);
    head1->left = NULL;
    convertToSortedDLL(root2, head2);
    head2->left = NULL;
    node *merged = mergeLL(head1, head2);
    int size = cntNodes(merged);
    return LLToBST(merged, size);
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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separator used to separate levels

    while (!q.empty())
    {
        node *temp = q.front();
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

int main()
{
    node *root1 = NULL;
    node *root2 = NULL;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    //4 2 7 -1 3 -1 -1 -1 -1  
   //5 1 7 -1 -1 -1 -1

    // creating binary tree
    cout << "Enter data root 1" << endl;
    root1 = buildTree(root1);

    cout << "Enter data root 2" << endl;
    root2 = buildTree(root2);
    node *ans = mergeBST(root1, root2);
    cout << "after merging both BST" << endl;
    levelOrderTraversal(ans);
    return 0;
}