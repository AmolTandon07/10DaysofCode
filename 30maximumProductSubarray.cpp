class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int prefix=1,suffix=1;
     int left,right,i,maxi=INT_MIN;
     int n=nums.size();
     for(i=0;i<nums.size();i++)
     {
         left=nums[i];
         right=nums[n-i-1];
         if(prefix==0)
         {
             prefix=1;
         }
         if(suffix==0)
         {
             suffix=1;
         }
         prefix=prefix*nums[i];
         suffix=suffix*nums[n-i-1];
         maxi=max(maxi,max(prefix,suffix));
     }  
     return maxi;  
    }
};
