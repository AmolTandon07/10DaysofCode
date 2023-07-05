class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        for(i=1;i<nums.size();i++)
        {
            ans=ans^nums[i];
           
            if(ans==0)
            {
               ans=nums[i];
            }
            else
            {
              if(i%3!=0)
                {
                    ans=nums[i-1];
                    break;
                } 
                else
                {
                    ans=nums[i];
                } 
            }
        }
        return ans;
    }
};
