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
  bool check(TreeNode* l , TreeNode* r)
  {
      bool ans=true;
      if(l==NULL && r==NULL)
      return true;
      else if(l==NULL && r!=NULL)
      return false;
      else if(l!=NULL && r==NULL)
      return false;
      else if(l->val!=r->val)
      return false;
    //   else if(l->left!=r->right)
    //   return false;
     
          bool rightCheck=check(l->left , r->right);
          bool leftCheck=check(l->right , r->left);
          ans=rightCheck&&leftCheck;
      
      return ans;
      

  }
    bool isSymmetric(TreeNode* root) {
        return check(root->left , root->right);
        
    }
};
