#include <iostream>
#include <queue>
#include<vector>
#include<map>
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

vector<int> verticalOrder(node* &root)
    {
        map<int, map<int,vector<int> > > nodes;
        queue< pair<node*, pair<int,int> > > q;
        vector<int> ans;
        
        if(root == NULL)
            return ans;
            
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()) {
            pair<node*, pair<int,int> > temp = q.front();
            q.pop();
            node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1) ));
                
            if(frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
        
        for(auto i: nodes) {
            
            for(auto j:i.second) {
                
                for(auto k:j.second)
                {
                    ans.push_back(k);
                }
            }
        }
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

    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    // creating binary tree
    root = buildTree(root);
    vector<int> ans = verticalOrder(root);
    cout<<"after vertical traversal"<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;

}