class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int i=0;
        vector<vector<int>> ans;
        solve(nums,i, ans);
        return ans;
    }

    void solve(vector<int>& nums, int i ,  vector<vector<int>>& ans)
    {
        int j;
        if(i>=nums.size())
        {
            ans.push_back(nums);
        }
        for(j=i;j<nums.size();j++)
        {
        swap(nums[i] , nums[j]);
        solve(nums , i+1 , ans);
        swap(nums[i] , nums[j]);
        }
    }

};
