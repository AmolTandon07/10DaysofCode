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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)
        return 0;
        q.push(NULL);
        int count=0;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            //After completion of every level we are inserting 
            // a NULL marker.
            if(temp==NULL)
            {
                count++;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if(temp->right)
                {
                    q.push(temp->right);
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
            }
        }
        return count;
    }
};
