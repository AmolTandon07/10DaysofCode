class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int i,j,mul,maxi=INT_MIN;
      for(i=0;i<nums.size();i++)
      {
          mul=nums[i];
          for(j=i+1;j<nums.size();j++)
          {
              maxi=max(mul,maxi);
              mul=mul*nums[j];
             
         
          }
        maxi=max(mul,maxi);
      }  
      return maxi;
    }
};
