class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int i,count=1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==original)
            {
                original=original*2;
            }
        }
        return original;
    }
};
