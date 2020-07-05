/* Count the sum of the number of nodes present in the tree */ 

#include<iostream>
using namespace std;
class node 
{
	public:
		int data;
		node* left;
		node* right;
	
	node (int d)
	{
		data = d ;
		left = NULL ;
		right = NULL ;
	}
};
node* buildTree()
{
	int d;
	cin>>d;
	while(d==-1)
	{
		return NULL;
	}
	node * root = new node(d);
	root -> left = buildTree();
	root -> right = buildTree();
    return root;
}
// Print the binary tree using Pre-Order Traversal 
void print(node *root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
// Counting total number of nodes in the tree 
int count(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return 1+ count(root->left) + count(root->right);
}
// Main method Driver Function 
int main()
{
	node *root = buildTree();
    cout<<"The number of nodes in the tree are: ";
	print(root);
    cout<<endl;
    cout<<"Number of nodes is: "<<count(root);
}

// Input: 8 10 7 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// Output: The number of nodes in the tree are: 8 10 7 6 9 7 3 14 13 
//         Number of nodes is: 9

