class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;

        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>>vp;

        for(auto it: mp)
        {
            vp.push_back({it.first , it.second});
        }

        sort(vp.begin() , vp.end() , [](pair<int,int> &a , pair<int,int> &b)
        {
            if(a.second!=b.second)
            return(a.second<b.second);
            else
            return(a.first>b.first);
        });
    vector<int>ans;
    for(i=0;i<vp.size();i++)
    {
        int ele=vp[i].second;
        for(int j=0;j<ele;j++)
        {
            ans.push_back(vp[i].first);
        }
    }
  
    return ans;
    }
};
