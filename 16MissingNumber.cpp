class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int actualsum=0;
      int i,sum=0;
      int n=nums.size();
      for(i=0;i<nums.size();i++)
      {
          sum=sum+nums[i];
      } 
      actualsum=n*(n+1)/2;
      int ans=0;
      ans=actualsum-sum;
      return ans;
    }
};
