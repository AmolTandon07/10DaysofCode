

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
int ans;
bool check=false;
bool kAncestor(Node* root , int &k , int node)
{
    if(root==NULL)
    return false;
    
    if(root->data==node)
    return true;
    
    bool leftAns = kAncestor(root->left , k , node);
    bool rightAns = kAncestor(root->right , k , node);
    
    if(leftAns==true || rightAns==true)
    k--;
    if(k==0)
    {
    ans=root->data;
    k=-1;
    check=true;
    }
    return leftAns||rightAns;
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    check =0;
    
    kAncestor(root , k ,node);
    if(check==true)
    // if(k <= 0)
        return ans;
    else
        return -1;
}
