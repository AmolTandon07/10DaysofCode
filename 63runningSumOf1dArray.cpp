class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int i;
        int sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
