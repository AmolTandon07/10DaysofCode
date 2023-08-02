class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;

        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi=INT_MIN;
        int ans;
        for(auto it:mp)
        {
            if(it.first%2==0)
            {
                if(maxi<it.second)
                {
                    maxi=it.second;
                    ans=it.first;
                }
            }
        }
        if(maxi==INT_MIN)
        return -1;
        else
        return ans;
    }
};
