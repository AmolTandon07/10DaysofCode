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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(root==NULL)
        return ans;
        q.push(root);
        q.push(NULL);
        int maxi=INT_MIN;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();

            if(temp==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                }

                ans.push_back(maxi);
                maxi=INT_MIN;
            }
            else
            {
                if(temp->val>maxi)
                {
                    maxi=temp->val;
                }
                if(temp->left)
                q.push(temp->left);

                if(temp->right)
                q.push(temp->right);
            }
        }

        return ans;
    }
};
