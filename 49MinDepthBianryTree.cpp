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
    int mn = INT_MAX;
    void dfs(TreeNode* n , int h){
        if(!n)return ;
        if(!n->left && !n -> right){
            mn = min(mn , h);
        }
        dfs(n -> left , h + 1);
        dfs(n -> right , h + 1);
    } 
    int minDepth(TreeNode* root) {
    //    if(root==NULL)
    //    return 0;
    //    int leftHeight=minDepth(root->left);
    //    int rightHeight=minDepth(root->right);
    //    int minHeight=min(leftHeight,rightHeight)+1;
    //    return minHeight;
        if(!root)return 0;
        dfs(root , 1); 
        return mn;
    }
};
