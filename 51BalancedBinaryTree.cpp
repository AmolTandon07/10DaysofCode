/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

bool flag=true;

int height(TreeNode* root)
{
    if(!root)
    return 0;

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int maxHeight=max(leftHeight,rightHeight)+1;

    return maxHeight;
}
void  balanced(TreeNode* root)
{
    if(root==NULL)
    return ;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int diff=abs(leftHeight-rightHeight);
    if(diff>1)
    flag=false;

    balanced(root->left);
    balanced(root->right);
}
    bool isBalanced(TreeNode* root) {
        balanced(root);
        return flag;
    }
};
