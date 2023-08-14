class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=2*nums[i];
                nums[i+1]=0;
            }
        }
        int count=0;
        vector<int>ans;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
                count++;
            }
        }
        int rem=nums.size()-count;
        for(i=0;i<rem;i++)
        {
            ans.push_back(0);
        }
        return ans;
        }
};
