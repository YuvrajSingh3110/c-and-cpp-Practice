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

vector <int> zigZagTraversal(node* root)
    {
    	vector<int> result;
    
    	if(root == NULL){
    	    return result;
    	}
    		
    	queue<node*> q;
    	q.push(root);
    	bool leftToRight = true;
    	while(!q.empty()){
    	    int n = q.size();
    	    vector<int> ans(n);
    	    //level processes
    	    for(int i=0; i<n; i++){
    	        node* frontNode = q.front();
    	        q.pop();
    	        int index = leftToRight ? i : n-i-1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode -> left != NULL){
    	            q.push(frontNode -> left);
    	        }
    	        if(frontNode -> right != NULL){
    	            q.push(frontNode -> right);
    	        }
    	    }
    	    //change in direction
    	    leftToRight = !leftToRight;
    	    for(auto i: ans){
    	        result.push_back(i);
    	    }
    	}
    	return result;
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
    vector<int> ans = zigZagTraversal(root);
    cout<<"after zig zag traversal"<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;

}