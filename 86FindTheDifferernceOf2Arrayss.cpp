class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>mp1;
        map<int,bool>mp2;

        vector<int>ans1;
        vector<int>ans2;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i;
        for(i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]=true;
        }

        for(i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]=true;
        }

        for(i=0;i<nums1.size();i++)
        {
            if(!mp2.count(nums1[i]))
            {
                mp2[nums1[i]]=true;
                ans1.push_back(nums1[i]);
                
            }
        }

           for(i=0;i<nums2.size();i++)
        {
                 if(!mp1.count(nums2[i]))
            {
                mp1[nums2[i]]=true;
                ans2.push_back(nums2[i]);
                
            }
        }

       vector<vector<int>>fans;

        fans.push_back(ans1);
        fans.push_back(ans2);
        
        return fans;
    }
};
