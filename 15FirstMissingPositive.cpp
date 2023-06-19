class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int i,targetIndex=0;
      bool flag=false;
      for(i=0;i<nums.size();i++)
      {
          if(nums[i]>0)
          {
              targetIndex=i;
            //   targetIndex=targetIndex+1;
              break;
          }
      }  
      int tracker=1;
      int ans;
      for(i=targetIndex;i<nums.size();i++)
      {
          if(nums[i]!=tracker)
          {
              if(nums[i]>tracker)
              {
              ans=tracker;
              flag=true;
              break;
              }
              else
              {
                  continue;
              }
          }
          else
          tracker++;
      }
      if(flag)
      return ans;
      else
      return tracker;

    }
};
