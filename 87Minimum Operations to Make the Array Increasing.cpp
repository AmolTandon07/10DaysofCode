class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i,ans=0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                int diff=nums[i-1]-nums[i];
                diff=diff+1;
                int update=nums[i]+diff;
                nums[i]=update;
                ans=ans+diff;
            }
        }
        return ans;
    }
};
