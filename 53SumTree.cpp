class Solution
{
    bool flag=true;
    public:
    
    int sumTree(Node* root)
    {
        if(root==NULL)
         return 0;
         int leftSum=sumTree(root->left);
         int rightSum=sumTree(root->right);
         
         if(root->left!= NULL && root->right!=NULL)
         {
         if(root->data!=leftSum+rightSum )
         flag=false;
         }
         root->data=leftSum+root->data+rightSum;
         return root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         
         sumTree(root);
         
         return flag;
         
         
    }
};
