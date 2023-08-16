class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,bool>mp;

        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]=true;
        }
        int ans=0;
        for(auto it:mp)
        {
            int ele;
            ele=it.first;
            int next,back;
            next=ele+diff;
            back=ele-diff;
            if(mp.count(next) && mp.count(back))
            {
                ans++;
            }
        }
        return ans;
    }
};
