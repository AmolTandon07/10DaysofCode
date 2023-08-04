class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int i;
        int maxi=INT_MIN;
        int index;

        for(i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
            {
                maxi=nums[i];
                index=i;
            }
        }

        sort(nums.begin() , nums.end());
        maxi=nums[nums.size()-1];

        bool flag=true;

        for(i=0;i<nums.size()-1;i++)
        {
            if((nums[i]*2)>maxi)
            {
                flag=false;
            }
        }
        if(flag)
        return index;
        else
        return -1;
    }
};
