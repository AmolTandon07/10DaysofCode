class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       map<int,int>mp;
       int n = nums.size();
       vector<int> news=nums;
       int i;
       sort(news.begin(),news.end());

       for( i = n-1 ;i>=0;i--){
           mp[news[i]]=i;
       }

       for(i=0;i<n;i++)
       {
           int ele=nums[i];
           for(auto ij:mp)
           {
             if(ele==ij.first) 
             {
                 nums[i]=ij.second;
                
             } 
           }
       }
       return nums;

    }
};
