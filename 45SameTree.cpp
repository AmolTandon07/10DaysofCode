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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=true;
        if(p==NULL && q==NULL)
        return true;
        else if(p==NULL && q!=NULL)
        return false;
        else if(p!=NULL && q==NULL)
        return false;
        else if(p->val!=q->val)
        return false;
        // else if(p->val==q->val)
        // return true;
        else
        {
        bool leftEqual=isSameTree(p->left,q->left);
        bool rightEqual=isSameTree(p->right , q->right);
        ans=leftEqual&&rightEqual;
        }
        
        return ans;
    }
};
